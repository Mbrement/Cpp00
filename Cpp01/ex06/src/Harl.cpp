#include "Harl.hpp"

void	Harl::complain()
{
	int i;
	Harl::ptr_func	funcs[4] =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	i = 0;
	while (i < 4)
	{
		if (i <= Harl::max)
			switch (i)
		{
			case DEBUG:
				funcs[i]();
				break;
			case INFO:
				funcs[i]();
				break;
			case WARNING:
				funcs[i]();
				break;
			case ERROR:
				funcs[i]();
				break;
		}
		i++;
	}
}

void	Harl::logLevel(const std::string &level)
{
	int i;
	Harl::max = -1;
    static const std :: string  names[4] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	i = 0;
	while (i < 4)
	{
		if (names[i] == level)
		{
			Harl::max = i;
			break;
		}
		i++;
	}
}

void	Harl::debug (void)
{
	std::cout << "Classic debug message from Harl" << std::endl;
}
void	Harl::info (void)
{
	std::cout << "Classic info message from Harl" << std::endl;
}
void	Harl::warning (void)
{
	std::cout << "Classic warning message from Harl" << std::endl;
}
void	Harl::error (void)
{
	std::cout << "Classic error message from Harl" << std::endl;
}
