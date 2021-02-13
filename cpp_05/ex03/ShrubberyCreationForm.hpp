#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"


class ShrubberyCreationForm : public Form{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string & target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm & operator=( const ShrubberyCreationForm& other );

	void execute(Bureaucrat const & executor) const;
};


#endif