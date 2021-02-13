#include "Intern.hpp"

Intern::Intern(){
	std::cout << "Intern was created!" << std::endl;
}

Intern::Intern(const Intern& other){
	*this = other;
}

Intern::~Intern(){
	std::cout << "Intern is deleted" << std::endl;
}

Intern & Intern::operator=( const Intern& other ){
	(void)other;
	return *this;
}

Form * Intern::InternPresident(const std::string &form_target){
	PresidentialPardonForm * presid = new PresidentialPardonForm(form_target);
	return presid;
}

Form * Intern::InternRobot(const std::string &form_target){
	RobotomyRequestForm * robot = new RobotomyRequestForm(form_target);
	return robot;
}

Form * Intern::InternShrub(const std::string &form_target){
	ShrubberyCreationForm * shrub = new ShrubberyCreationForm(form_target);
	return shrub;
}

const char * Intern::InvalidFormNameException::what() const throw(){
	return "Intern: Can't create form because of invalid name";
}

Form * Intern::makeForm(const std::string &form_name, const std::string &form_target){
	Form* (*func[3])(const std::string &) = {Intern::InternPresident, Intern::InternRobot, Intern::InternShrub};
	std::string names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	for (int i = 0; i < 3; i++){
		if (form_name == names[i]){
			std::cout << "Intern creates " << form_name << " form" << std::endl;
			return (func[i](form_target));
		}
	}
	throw Intern::InvalidFormNameException();
}
