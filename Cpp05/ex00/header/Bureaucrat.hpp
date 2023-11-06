#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

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
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& a);
#endif