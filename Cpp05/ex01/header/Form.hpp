#ifndef FROM_HPP
#define FROM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{

public :
/*cannonical form*/
	Form();
    Form(Form &other);
    Form &operator=(Form &other);
    Form(const std::string name);
    Form(const std::string name, int grade);
	Form (const Form &Form);
	~Form();
	Form	&operator=(const Form &Form);
/*cannonical form*/


	int getCanSign() const;
	int getCanExec() const;
	int getSigned() const;
	void Signed( class::Bureaucrat);
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



private	:
	std::string const _name;
	bool _signature = 0;
	int _canSign;
	int _canExec;
};
std::ostream& operator<<(std::ostream& out, const Form& a);
#endif