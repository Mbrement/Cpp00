#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{

public :
/*cannonical form*/
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(PresidentialPardonForm &other);
    PresidentialPardonForm &operator=(PresidentialPardonForm &other);
	~PresidentialPardonForm();
/*cannonical form*/
	void execute(Bureaucrat const &executor) const;
	void executeCurrent() const;
private:
	std::string _target;
};

#endif