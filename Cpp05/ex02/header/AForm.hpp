#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

public :
/*cannonical Aform*/
	AForm();
    AForm(AForm &other);
    AForm &operator=(AForm &other);
	virtual ~AForm() = 0;
/*cannonical Aform*/

    AForm(const std::string name, int canSign, int canExec);

	int getCanSign() const;
	int getCanExec() const;
	int getSigned() const;
	int getSignature() const;
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

	class AFormNotSigned : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "AForm unsigned";
		}
	};
	const std::string& name() const;
	bool signature() const;
	int canSign() const;
	int canExec() const;
	void changeSignature(bool i);
	void changeCanSign(int CanSign);
	void changeCanExec(int CanExec);
	void changeName(std::string &name);
	void beSigned(class Bureaucrat &Bureaucrat);
	void execute(Bureaucrat const &executor) const;
	virtual void executeCurrent() const = 0;



private	:
	std::string _name;
	bool _signature;
	int _canSign;
	int _canExec;
};

std::ostream& operator<<(std::ostream& out, const AForm& a);

#endif