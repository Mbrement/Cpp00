#include "../header/AForm.hpp"


AForm::AForm(): _name("DefaultAFormName"),
	_canSign(1),
	_canExec(1)
{
	_signature = 0;
}


AForm::AForm(AForm &other):
	_name(other._name),
	_canSign(other._canSign),
	_canExec(other._canExec)
{
	if (_canSign < 1 || _canExec < 1)
		throw GradeTooHighException();
	if (_canSign > 150 || _canExec > 150)
		throw GradeTooLowException();
	_signature = other._signature;
}

AForm &AForm::operator=(AForm &other)
{
	std::string *tmp_name = (std::string*) &_name;
	int *tmp_canSign = (int*) &_canSign;
	int *tmp_canExec = (int*) &_canExec;
	*tmp_name = other._name;
	tmp_canSign = (int *)&other._canSign;
	tmp_canExec = (int *)&other._canExec;
	if (_canSign < 1 || _canExec < 1)
		throw GradeTooHighException();
	if (_canSign > 150 || _canExec > 150)
		throw GradeTooLowException();
	_signature = other._signature;
	return (*this);
}

AForm::AForm(const std::string name, int canSign, int canExec):
	_name(name),
	_canSign(canSign),
	_canExec(canExec)
{
	if (_canSign < 1 || _canExec < 1)
		throw GradeTooHighException();
	if (_canSign > 150 || _canExec > 150)
		throw GradeTooLowException();
	_signature = 0;
}

AForm::~AForm()
{

}



void AForm::Signed(Bureaucrat &target)
{
	if (target.getGrade() <= _canSign)
		_signature = true;
	else
		throw GradeTooLowException();
}

const std::string &AForm::name() const
{
	return (_name) ;
}

bool AForm::signature() const
{
	return (_signature);
}

int AForm::canSign() const
{
	return (_canSign);
}

int AForm::getSigned() const
{
	return (_signature);
}

int AForm::canExec() const
{
	return (_canExec);
}

std::string AForm::getName() const
{
	return(_name);
}

void AForm::beSigned(class Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() > canSign())
		throw GradeTooLowException();
	else
	 	_signature = 1;
}

int AForm::getCanExec() const
{
	return(_canExec);
}
int AForm::getCanSign() const
{
	return(_canSign);
}

int AForm::getSignature() const
{
	return(_signature);
}

std::ostream& operator<<(std::ostream& out, const AForm& a)
{
	std::cout << "The document have " << a.getSigned() << " signature " << " can be signed by level " << a.getCanSign() << " or more and be executed at level " << a.getCanExec();
	return (out);
}


void AForm::changeSignature( bool i)
{
	_signature = i;
}
void AForm::changeCanSign(int CanSign)
{
	_canSign = CanSign;
}
void AForm::changeCanExec(int CanExec)
{
	_canExec = CanExec;
}
void AForm::changeName(std::string &name)
{
	_name = name;
}

