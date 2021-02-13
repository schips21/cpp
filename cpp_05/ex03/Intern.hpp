#ifndef INTERN_HPP
# define INTERN_HPP

//class Bureaucrat;
//
//#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
public:
	Intern();
	Intern(const Intern& other);
	~Intern();
	Intern & operator=( const Intern& other );

	static Form * InternPresident(const std::string &form_target);
	static Form * InternRobot(const std::string &form_target);
	static Form * InternShrub(const std::string &form_target);

	class InvalidFormNameException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

	static Form * makeForm(const std::string &form_name, const std::string &form_target);
};


#endif