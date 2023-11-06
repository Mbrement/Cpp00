#include "../header/Bureaucrat.hpp"
#include "../header/Form.hpp"


Bureaucrat::Bureaucrat ()
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
	_name = "defaultBureaucrat";
	_grade = 150;
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat (const std::string name)
{
	std::cout << "Named Bureaucrat constructor called" << std::endl;
	_name = name;
	_grade = 150;
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}
Bureaucrat::Bureaucrat (int grade)
{
	std::cout << "Graded Bureaucrat constructor called" << std::endl;
	_name = "defaultBureaucrat";
	_grade = grade;
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}
Bureaucrat::Bureaucrat (const std::string name, int grade)
{
	std::cout << "Named & graded Bureaucrat constructor called" << std::endl;
	_name = name;
	_grade = grade;
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat (const Bureaucrat &Bureaucrat)
{
	std::cout <<  "Copy Bureaucrat constructor called" << std::endl;
	_name = Bureaucrat._name;
	_grade = Bureaucrat._grade;
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default Bureaucrat destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &Bureaucrat)
{
	std::cout <<  "Default assignement called" << std::endl;
	_name = Bureaucrat._name;
	_grade = Bureaucrat._grade;
	return(*this);
}


//___________________________________

void	Bureaucrat::setGrade(int newGrade)
{
	_grade = newGrade;	
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::setName(std::string newName)
{
	_name = newName;
}


int Bureaucrat::getGrade() const
{
	return(_grade);
}

std::string Bureaucrat::getName() const
{
	return(_name);
}



std::ostream& operator<<(std::ostream& out, const Bureaucrat& a)
{
	std::cout << a.getName() << ", bureaucrat grade " << a.getGrade();
	return(out);
}

void Bureaucrat::signForm(Form &Form)
{
	if (Form.getCanSign() > _grade)
	{
		std::cout << _name << " signed because " << _grade << " Has greater power than " << Form.canSign() << std::endl;
		Form.beSigned(*this);
	}
	else
	{
	 	std::cout << _name << " couldn't sign " << Form.name() << "because he has a too low grade" << std::endl; 
		throw GradeTooLowException();
	}
}


void Bureaucrat::increment()
{
	_grade++;
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}
void Bureaucrat::decrement()
{
	_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
}