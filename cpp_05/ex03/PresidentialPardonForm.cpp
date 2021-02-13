#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
Form("ShrubberyCreationForm", 25, 5, "Default target")
{
	std::cout << this->getName() << " was successfully created!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) :
		Form("PresidentialPardonForm", 25, 5, target)
{
	std::cout << this->getName() << " was successfully created!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other){
	this->setSigned(other.getSigned());
	*this = other;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (!(this->getSigned())){
		throw Form::FormDoesNotSigned();
	}
	if (this->getGradeToExec() < executor.getGrade()){
		throw Form::GradeTooLowToExecuteException();
	}
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << this->getName() << " disappeared!" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( const PresidentialPardonForm& other ){
	this->setSigned(other.getSigned());
	return *this;
}
