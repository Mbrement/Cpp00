#include "../header/Intern.hpp"


Intern::Intern()
{

}

Intern::Intern(Intern &other)
{
	(void) other;
}

Intern &Intern::operator=(Intern &other)
{
	(void) other;
	return(*this);
}

Intern::~Intern()
{

}

Form *Intern::makeForm(const std::string form, const std::string target)
{
	const std::string forms[3] = {
		"PresidentialPardonForm",
		"RobotomyRequestForm",
		"ShrubberyCreationForm",
	};
	int i;
	i = 0;
	while (forms[i] != form && i < 3)
		i++;
	if (i == 3)
		throw InterExeption();
	else
		switch (i)
		{
			case 0:
				return new PresidentialPardonForm(target); break;
			case 1:
				return new RobotomyRequestForm(target); break;
			case 2:
				return new ShrubberyCreationForm(target); break;
		};
		return (NULL);
}	

/*
PresidentialPardonForm::PresidentialPardonForm(): Form()
{
	std::string tmp;
	tmp = "PresidentialPardonFormName";
	this->changeName(tmp);
	changeCanExec(5);
	changeCanSign(25);
	_target = "PresidentialPardonFormDefault";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): Form()
{
	std::string tmp;
	tmp = "PresidentialPardonFormName";
	this->changeName(tmp);
	changeCanExec(5);
	changeCanSign(25);
	_target = target;
}

    PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other)
{
	std::string tmp;
	tmp = other.getName();
	this->changeName(tmp);
	changeCanExec(other.getCanExec());
	changeCanSign(other.getCanSign());
	changeSignature(other.getSignature());
	_target = other._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &other)
{
	std::string tmp;
	tmp = other.getName();
	this->changeName(tmp);
	changeCanExec(other.getCanExec());
	changeCanSign(other.getCanSign());
	changeSignature(other.getSignature());
	_target = other._target;
	return(*this);
}


PresidentialPardonForm::~PresidentialPardonForm()
{

}
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getCanExec())
		throw GradeTooLowException();
	if (!getSignature())
		throw FormNotSigned();
	std::cout << executor.getName() << " execute " << getName() << std::endl;
	executeCurrent();
}

void PresidentialPardonForm::executeCurrent() const
{

	std::cout << "Congratulation " << _target << " ! You have been pardoned by Zaphod Beeblebrox, the president of the galaxy !" << std::endl;
}*/