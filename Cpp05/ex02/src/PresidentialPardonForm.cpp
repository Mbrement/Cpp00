#include "../header/PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(): AForm()
{
	std::string tmp;
	tmp = "PresidentialPardonFormName";
	this->changeName(tmp);
	changeCanExec(5);
	changeCanSign(25);
	_target = "PresidentialPardonFormDefault";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm()
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
		throw AFormNotSigned();
	std::cout << executor.getName() << " execute " << getName() << std::endl;
	executeCurrent();
}

void PresidentialPardonForm::executeCurrent() const
{

	std::cout << "Congratulation " << _target << " ! You have been pardoned by Zaphod Beeblebrox, the president of the galaxy !" << std::endl;
}