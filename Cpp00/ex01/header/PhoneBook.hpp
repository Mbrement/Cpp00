#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

#define MAX_CONTACT 8

class PhoneBook{
public:
	PhoneBook();
	void addContact(PhoneBook &phoneBook, int index);
	void printContact(PhoneBook &phoneBook, int index);
	void printAllContact(PhoneBook &phoneBook);
private:
	Contact contact[MAX_CONTACT];
};

#endif // PHONEBOOK_H
