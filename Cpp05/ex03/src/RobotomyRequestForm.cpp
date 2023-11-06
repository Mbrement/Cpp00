#include "../header/RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(): Form()
{
	std::string tmp;
	tmp = "RobotomyRequestFormName";
	this->changeName(tmp);
	changeCanExec(45);
	changeCanSign(72);
	_target = "RobotomyRequestFormDefault";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): Form()
{
	std::string tmp;
	tmp = "RobotomyRequestFormName";
	this->changeName(tmp);
	changeCanExec(45);
	changeCanSign(72);
	_target = target;
}

    RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other)
{
	std::string tmp;
	tmp = other.getName();
	this->changeName(tmp);
	changeCanExec(other.getCanExec());
	changeCanSign(other.getCanSign());
	changeSignature(other.getSignature());
	_target = other._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &other)
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


RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getCanExec())
		throw GradeTooLowException();
	if (!getSignature())
		throw FormNotSigned();
	std::cout << executor.getName() << " execute " << getName() << std::endl;
	executeCurrent();
}

void RobotomyRequestForm::executeCurrent() const
{
	int i;
	srand((unsigned int)time(0));
	i = std::rand() % 2;
	std::cout << "*drilling noises*" << std::endl;
	if (i == 1)
			std::cout << _target << " has been robotomized with sucess !" << std::endl;
	else
		std::cout << "the robotomized of " << _target << "failed !" << std::endl;
}