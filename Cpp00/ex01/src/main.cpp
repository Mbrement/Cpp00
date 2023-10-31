#include "PhoneBook.hpp"
#include <iostream>


int main()
{
	PhoneBook phoneBook;
	int		index = 0;
	std::string args;
	while (args != "EXIT")
	{
		std::getline(std::cin, args);
		if (std::cin.eof())
			exit(1);
		if (args == "ADD")
		{
			phoneBook.addContact(phoneBook, index);
			index++;
			index %= 8;
		}
		else if (args =="SEARCH")
		{
			phoneBook.printAllContact(phoneBook);
			std::cout << "Enter index : ";
			std::getline(std::cin, args);
			if (std::cin.eof())
				exit(1);
			while (std::atoi(args.c_str()) < 1 || std::atoi(args.c_str()) > 8)
			{
				std::cout << "Incorect index : ";
				std::getline(std::cin, args);
				if (std::cin.eof())
					exit(1);
			}
			phoneBook.printContact(phoneBook, std::atoi(args.c_str()) - 1);
		}
		else if (args =="EXIT")
			return 0;
		else
			std::cout << "Take only \"ADD\", \"SEARCH\" and \"EXIT\" as argument" << std::endl;
	}
	return 0;
}
