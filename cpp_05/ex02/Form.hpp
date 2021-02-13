#ifndef FORM_HPP
# define FORM_HPP


#include "Bureaucrat.hpp"
#include <iostream>
class Bureaucrat;

class Form{
private:
	const std::string	_name;
	bool				_signed;
	const int			_grade_to_sign;
	const int			_grade_to_exec;
	const std::string	_target;
public:
	Form();
	Form(const std::string & name, const int grade_to_sign, const int grade_to_exec, const std::string & target);
	Form(const Form& other);
	virtual ~Form();
	Form & operator=( const Form& other );

	const std::string &getName() const;
	bool getSigned() const;
	const int &getGradeToSign() const;
	const int &getGradeToExec() const;
	const std::string &getTarget() const;

	void setSigned(bool sign);

	void beSigned(const Bureaucrat& bureaucrat);

	virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class FormDoesNotSigned : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowToExecuteException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

};

std::ostream &operator<<(std::ostream &oper, const Form & info);

#endif