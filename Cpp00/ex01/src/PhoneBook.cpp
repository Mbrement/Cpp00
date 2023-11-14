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
	phoneBook.contact[0].printContact(0 + 1);
	phoneBook.contact[1].printContact(1 + 1);
	phoneBook.contact[2].printContact(2 + 1);
	phoneBook.contact[3].printContact(3 + 1);
	phoneBook.contact[4].printContact(4 + 1);
	phoneBook.contact[5].printContact(5 + 1);
	phoneBook.contact[6].printContact(6 + 1);
	phoneBook.contact[7].printContact(7 + 1);
}


void PhoneBook::printContact(PhoneBook &phoneBook, int index)
{
	std::cout.width(10);
	std::cout<< std::setfill (' ') << (char)('0' + index + 1) << '|';
	phoneBook.contact[index].printContact(0);
}

