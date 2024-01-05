#include "../header/Bureaucrat.hpp"

Bureaucrat::Bureaucrat ()
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
	_name = "defaultBureaucrat";
	_grade = 150;
}

void	Bureaucrat::changeGrade(int newGrade)
{
	try
	{
		setGrade(newGrade);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat (const std::string name)
{
	std::cout << "Named Bureaucrat constructor called" << std::endl;
	_name = name;
	_grade = 150;
}
Bureaucrat::Bureaucrat (int grade)
{
	std::cout << "Graded Bureaucrat constructor called" << std::endl;
	_name = "defaultBureaucrat";
	try{
		setGrade(grade);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat (const std::string name, int grade)
{
	std::cout << "Named & graded Bureaucrat constructor called" << std::endl;
	try{
		setGrade(grade);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	_name = name;
}

Bureaucrat::Bureaucrat (const Bureaucrat &Bureaucrat)
{
	std::cout <<  "Copy Bureaucrat constructor called" << std::endl;
	_name = Bureaucrat._name;
	try{
		setGrade(Bureaucrat._grade);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
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
	if (newGrade < 1)
	{
		this->_grade = 150;
		throw GradeTooHighException();
	}
	if (newGrade > 150)
	{
		this->_grade = 150;
		throw GradeTooLowException();
	}
	_grade = newGrade;	
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

void Bureaucrat::increment()
{
	try{
		setGrade(_grade - 1);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}
void Bureaucrat::decrement()
{
	try{
		setGrade(_grade + 1);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

