#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

enum LogLevel
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl
{
	

public :
	void complain (void);
	typedef void    (*ptr_func)(void);
	void	logLevel(const std::string &level);

private	:
	static void	debug (void);
	static void	info (void);
	static void	warning (void);
	static void	error (void);
	int		max;
};
#endif