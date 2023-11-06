#include "../header/AForm.hpp"


Form::Form(): _name("DefaultFormName"),
	_canSign(1),
	_canExec(1)
{
	_signature = 0;
}


Form::Form(Form &other):
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

Form &Form::operator=(Form &other)
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

Form::Form(const std::string name, int canSign, int canExec):
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

Form::~Form()
{

}



void Form::Signed(Bureaucrat &target)
{
	if (target.getGrade() <= _canSign)
		_signature = true;
	else
		throw GradeTooLowException();
}

const std::string &Form::name() const
{
	return (_name) ;
}

bool Form::signature() const
{
	return (_signature);
}

int Form::canSign() const
{
	return (_canSign);
}

int Form::getSigned() const
{
	return (_signature);
}

int Form::canExec() const
{
	return (_canExec);
}

std::string Form::getName() const
{
	return(_name);
}

void Form::beSigned(class Bureaucrat &Bureaucrat)
{
	if (Bureaucrat.getGrade() > canSign())
		throw GradeTooLowException();
	else
	 	_signature = 1;
}

int Form::getCanExec() const
{
	return(_canExec);
}
int Form::getCanSign() const
{
	return(_canSign);
}

int Form::getSignature() const
{
	return(_signature);
}

std::ostream& operator<<(std::ostream& out, const Form& a)
{
	std::cout << "The document have " << a.getSigned() << " signature " << " can be signed by level " << a.getCanSign() << " or more and be executed at level " << a.getCanExec();
	return (out);
}


void Form::changeSignature( bool i)
{
	_signature = i;
}
void Form::changeCanSign(int CanSign)
{
	_canSign = CanSign;
}
void Form::changeCanExec(int CanExec)
{
	_canExec = CanExec;
}
void Form::changeName(std::string &name)
{
	_name = name;
}

