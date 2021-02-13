#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
private:
	const std::string	_name;
	bool				_signed;
	const int			_grade_to_sign;
	const int			_grade_to_exec;
public:
	Form();
	Form(const std::string & name, const int grade_to_sign, const int grade_to_exec);
	Form(const Form& other);
	~Form();
	Form & operator=( const Form& other );

	const std::string &getName() const;
	bool getSigned() const;
	const int &getGradeToSign() const;
	const int &getGradeToExec() const;

	void beSigned(const Bureaucrat& bureaucrat);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &oper, const Form & info);

#endif