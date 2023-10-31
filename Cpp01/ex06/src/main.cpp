#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		Harl;
	std::string	argument;

	if (argc != 2)
	{
		std::cout << "Wrong number of argument" << std::endl;
		return (1);
	}
	argument = argv[1];
	Harl.logLevel(argument);
	Harl.complain();
	return(0);
}
