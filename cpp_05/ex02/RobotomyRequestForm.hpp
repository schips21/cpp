#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string & target);
	RobotomyRequestForm(const RobotomyRequestForm& other);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm & operator=( const RobotomyRequestForm& other );

	void execute(Bureaucrat const & executor) const;
};


#endif