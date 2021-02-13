#include "Form.hpp"

Form::Form() : _name("Default Form"), _signed(false),
_grade_to_sign(100), _grade_to_exec(100), _target("Default target")
{
	std::cout << _name << " was successfully created!" << std::endl;
}

Form::Form(const std::string & name, const int grade_to_sign, const int grade_to_exec,
const std::string & target) : _name(name), _signed(false),
_grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec), _target(target)
{
	if (grade_to_sign < 1 || grade_to_exec < 1){
		throw Form::GradeTooHighException();
	}
	if (grade_to_sign > 150 || grade_to_exec > 150){
		throw Form::GradeTooLowException();
	}
	std::cout << "Form " << _name << " was successfully created!" << std::endl;
}

Form::Form(const Form& other) :
_signed(other._signed), _grade_to_sign(other._grade_to_sign),
_grade_to_exec(other._grade_to_exec), _target(other._target)
{
	*this = other;
}

Form::~Form(){
	std::cout << "Form " << _name << " disappeared!" << std::endl;
}

Form & Form::operator=( const Form& other ){
	this->_signed = other._signed;
	return *this;
}

const std::string &Form::getName() const{
	return _name;
}

bool Form::getSigned() const{
	return _signed;
}

const int &Form::getGradeToSign() const{
	return _grade_to_sign;
}

const int &Form::getGradeToExec() const{
	return _grade_to_exec;
}

const std::string &Form::getTarget() const{
	return _target;
}


void Form::setSigned(bool sign){
	_signed = sign;
}


void Form::beSigned(const Bureaucrat & bureaucrat){
	if (bureaucrat.getGrade() > this->_grade_to_sign){
		throw Form::GradeTooLowException();
	}
	this->_signed = true;
	std::cout << "Form named " << this->_name << " was successfully signed by "
	<< bureaucrat.getName() << std::endl;
}

const char * Form::GradeTooLowException::what() const throw(){
	return "Form: Grade is too low";
}

const char * Form::GradeTooHighException::what() const throw(){
	return "Form: Grade is too high";
}

const char * Form::FormDoesNotSigned::what() const throw(){
	return "Form is not signed, cannot execute form";
}

const char * Form::GradeTooLowToExecuteException::what() const throw(){
	return "Bureaucrat has too low grade to execute form";
}

std::ostream &operator<<(std::ostream &oper, const Form & info){
	oper << "Form named " << info.getName() << ", signed status: "
	<< info.getSigned() << ", grade to sign is " << info.getGradeToSign()
	<< ", grade to execute is " << info.getGradeToExec() << std::endl;
	return (oper);
}