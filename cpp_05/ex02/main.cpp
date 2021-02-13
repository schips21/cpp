#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(){
	Bureaucrat b1("Bureaucrat b1", 5);
	Bureaucrat b2("Bureaucrat b2", 138);

	ShrubberyCreationForm place("Home");
	PresidentialPardonForm animal("Cat");
	RobotomyRequestForm tech("TV");
	std::cout << std::endl;

//	ShrubberyCreationForm
	try{
		place.beSigned(b1);
		place.execute(b1);
	}
	catch (Form::GradeTooHighException &ex){
		std::cout << ex.what() << std::endl;
	}
	catch (Form::GradeTooLowException &ex){
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	b2.executeForm(place);
	b2.incrementGrade();
	b2.executeForm(place);
	std::cout << std::endl;

//	PresidentialPardonForm
	while (b2.getGrade() > 5){
		b2.incrementGrade();
	}

	try{
		animal.beSigned(b1);
		animal.execute(b1);
	}
	catch (Form::GradeTooHighException &ex){
		std::cout << ex.what() << std::endl;
	}
	catch (Form::GradeTooLowException &ex){
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	b2.executeForm(animal);
	std::cout << std::endl;

//	RobotomyRequestForm
	try{
		tech.beSigned(b1);
		tech.execute(b1);
	}
	catch (Form::GradeTooHighException &ex){
		std::cout << ex.what() << std::endl;
	}
	catch (Form::GradeTooLowException &ex){
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	b2.executeForm(tech);
	std::cout << std::endl;

	return 0;
}