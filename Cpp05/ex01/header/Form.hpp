#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public :
/*cannonical form*/
	Form();
    Form(Form &other);
    Form &operator=(Form &other);
	~Form();
/*cannonical form*/

    Form(const std::string name, int canSign, int canExec);

	int getCanSign() const;
	int getCanExec() const;
	int getSigned() const;
	void Signed(Bureaucrat &Bureaucrat);
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
	const std::string& name() const;
	bool signature() const;
	int canSign() const;
	int canExec() const;
	void beSigned(class Bureaucrat &Bureaucrat);


private	:
	std::string const _name;
	bool _signature;
	const int _canSign;
	const int _canExec;
};
std::ostream& operator<<(std::ostream& out, const Form& a);
#endif