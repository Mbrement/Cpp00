#ifndef CONTACT_H
#define CONTACT_H
#include <string>
#include <cstdlib>

class Contact
{
public:
	Contact();
	void addContact();
	void printContact();
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
	void addFirstName();
	void addLastName();
	void addNickName();
	void addPhoneNumber();
	void addDarkestSecret();
};

#endif // CONTACT_H
