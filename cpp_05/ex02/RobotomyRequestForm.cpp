#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
Form("RobotomyRequestForm", 72, 45, "Default target")
{
	std::cout << this->getName() << " was successfully created!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) :
Form("RobotomyRequestForm", 72, 45, target)
{
	std::cout << this->getName() << " was successfully created!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other){
	this->setSigned(other.getSigned());
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << this->getName() << " disappeared!" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( const RobotomyRequestForm& other ){
	this->setSigned(other.getSigned());
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (!(this->getSigned())){
		throw Form::FormDoesNotSigned();
	}
	if (this->getGradeToExec() < executor.getGrade()){
		throw Form::GradeTooLowToExecuteException();
	}
	srand(time(0));
	int rand_num = rand() % 2;
	if (rand_num % 2 == 0){
		std::cout << "VVVZzzzzzzzzzzz..." << std::endl;
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	}
	else{
		std::cout << "Failed to robotomize " << this->getTarget() << std::endl;
	}
}