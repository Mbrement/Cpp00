#include <iomanip>
#include <iostream>
#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{

}

void PhoneBook::addContact(PhoneBook &phoneBook, int index)
{
	phoneBook.contact[index].addContact();
}

void PhoneBook::printAllContact(PhoneBook &phoneBook)
{
	std::cout<< "     index| First name|  Last name|  Nickname" << std::endl;
	phoneBook.contact[0].printContact();
	phoneBook.contact[1].printContact();
	phoneBook.contact[2].printContact();
	phoneBook.contact[3].printContact();
	phoneBook.contact[4].printContact();
	phoneBook.contact[5].printContact();
	phoneBook.contact[6].printContact();
	phoneBook.contact[7].printContact();
}


void PhoneBook::printContact(PhoneBook &phoneBook, int index)
{
	std::cout.width(10);
	std::cout<< std::setfill (' ') << (char)('0' + index + 1) << '|';
	phoneBook.contact[index].printContact();
}

