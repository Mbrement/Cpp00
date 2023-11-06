#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

#include <iostream>
#include <string>
#include "AForm.hpp"

class RobotomyRequestForm : public Form
{

public :
/*cannonical form*/
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(RobotomyRequestForm &other);
    RobotomyRequestForm &operator=(RobotomyRequestForm &other);
	~RobotomyRequestForm();
/*cannonical form*/
	void executeCurrent() const;
	void execute(Bureaucrat const &executor) const;
private:
	std::string _target;
};

#endif