#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>

class Form;

class Bureaucrat
{

public :
/*cannonical form*/
	Bureaucrat();
	Bureaucrat(int grade);
	Bureaucrat(const std::string name);
	Bureaucrat(const std::string name, int grade);
	Bureaucrat (const Bureaucrat &Bureaucrat);
	~Bureaucrat();
	Bureaucrat	&operator=(const Bureaucrat &Bureaucrat);
/*cannonical form*/

	void setGrade(int newGrade);
	void setName(std::string newName);
	int getGrade() const;
	std::string getName() const;
	void  signForm(Form &Form);

	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Grade too high";
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Grade too low";
		}
	};
	void increment();
	void decrement();

private	:
	std::string _name;
	int _grade;

	void execute(Bureaucrat const &executor);
	void executeForm(Form const &form) const;
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& a);
#endif