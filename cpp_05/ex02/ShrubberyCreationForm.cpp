#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
Form("ShrubberyCreationForm", 145, 137, "Default target")
{
	std::cout << this->getName() << " was successfully created!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) :
Form("ShrubberyCreationForm", 145, 137, target)
{
	std::cout << this->getName() << " was successfully created!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other){
	this->setSigned(other.getSigned());
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << this->getName() << " disappeared!" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other ){
	this->setSigned(other.getSigned());
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (!(this->getSigned())){
		throw Form::FormDoesNotSigned();
	}
	if (this->getGradeToExec() < executor.getGrade()){
		throw Form::GradeTooLowToExecuteException();
	}
	std::ofstream file_out(this->getTarget() + "_shrubbery");
	if (!file_out.is_open()){
		std::cout << "Error: can't open file" << std::endl;
	}
	else{
		file_out << "     _\\/_" << std::endl;
		file_out << "      /\\" << std::endl;
		file_out << "      /\\" << std::endl;
		file_out << "     /  \\" << std::endl;
		file_out << "     /~~\\o" << std::endl;
		file_out << "    /o   \\" << std::endl;
		file_out << "   /~~*~~~\\" << std::endl;
		file_out << "  /__*_____\\" << std::endl;
		file_out.close();
	}
}