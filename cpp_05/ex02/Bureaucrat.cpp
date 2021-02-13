#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default Bureaucrat"), _grade(1){
	std::cout << _name << " was successfully created!" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name){
	if (grade < 1){
		throw Bureaucrat::GradeTooHighException();
	}
	if (grade > 150){
		throw Bureaucrat::GradeTooLowException();
	}
	_grade = grade;
	std::cout << _name << " was successfully created!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other){
	*this = other;
}

Bureaucrat::~Bureaucrat(){
	std::cout << _name << " disappeared!" << std::endl;
}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat& other ){
	this->_grade = other.getGrade();
	return *this;
}

std::string const &Bureaucrat::getName() const{
	return this->_name;
}

int Bureaucrat::getGrade() const{
	return this->_grade;
}

void Bureaucrat::incrementGrade(){
	if (_grade == 1){
		throw Bureaucrat::GradeTooHighException();
	}
	_grade--;
	std::cout << "Grade of " << _name << " was successfully incremented to " << _grade << std::endl;
}

void Bureaucrat::decrementGrade(){
	if (_grade == 150){
		throw Bureaucrat::GradeTooLowException();
	}
	_grade++;
	std::cout << "Grade of " << _name << " was successfully decremented to " << _grade << std::endl;
}

void Bureaucrat::signForm(Form &form){
	try{
		form.beSigned(*this);
	}
	catch (Form::GradeTooLowException &ex){
		std::cout << ex.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form){
	try{
		form.execute(*this);
		std::cout << this->getName() << " executes " << form.getName() << std::endl;
	}
	catch (Form::FormDoesNotSigned &ex){
		std::cout << ex.what() << std::endl;
	}
	catch (Form::GradeTooLowToExecuteException &ex){
		std::cout << ex.what() << std::endl;
	}
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
	return "Bureaucrat: Grade is too low";
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
	return "Bureaucrat: Grade is too high";
}

std::ostream &operator<<(std::ostream &oper, const Bureaucrat & info){
	oper << info.getName() << ", bureaucrat grade "
	<< info.getGrade() << "." << std::endl;
	return (oper);
}