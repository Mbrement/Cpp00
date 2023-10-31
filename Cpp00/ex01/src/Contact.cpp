#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact()
{

}

void Contact::addContact()
{
	addFirstName();
	addLastName();
	addNickName();
	addPhoneNumber();
	addDarkestSecret();
}

void Contact::printContact()
{

	if (_firstName.size() <= 10)
		std::cout << std::setw(10) << _firstName << '|';
	else
		std::cout << _firstName.substr(0, 9) << ".|";

	if (_lastName.size() <= 10)
		std::cout << std::setw(10) << _lastName << '|';
	else
		std::cout << _lastName.substr(0, 9) << ".|";

	if (_nickName.size() <= 10)
		std::cout <<  std::setw(10) << _nickName << std::endl;
	else
		std::cout << _nickName.substr(0, 9) << "." << std::endl;
}

void Contact::addFirstName()
{
	std::cout << "First Name : ";
	std::getline(std::cin, _firstName);
	if (std::cin.eof())
		exit(1);
	if(!_firstName.size())
	{
		std::cout << "Parameter can't be empty, enter it again" << std::endl;
		addFirstName();
	}
}

void Contact::addLastName()
{
	std::cout << "Last Name : ";
	std::getline(std::cin, _lastName);
	if (std::cin.eof())
		exit(1);
	if(!_lastName.size())
	{
		std::cout << "Parameter can't be empty, enter it again" << std::endl;
		addLastName();
	}
}

void Contact::addNickName()
{
	std::cout << "Nick Name : ";
	std::getline(std::cin, _nickName);
	if (std::cin.eof())
		exit(1);
	if(!_nickName.size())
	{
		std::cout << "Parameter can't be empty, enter it again" << std::endl;
		addNickName();
	}
}

void Contact::addPhoneNumber()
{
	std::cout << "Phone Number : ";
	std::getline(std::cin, _phoneNumber);
	if (std::cin.eof())
		exit(1);
	if(!_phoneNumber.size())
	{
		std::cout << "Parameter can't be empty, enter it again" << std::endl;
		addPhoneNumber();
	}
}

void Contact::addDarkestSecret()
{
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, _darkestSecret);
	if (std::cin.eof())
		exit(1);
	if(!_darkestSecret.size())
	{
		std::cout << "Parameter can't be empty, enter it again" << std::endl;
		addDarkestSecret();
	}
}
