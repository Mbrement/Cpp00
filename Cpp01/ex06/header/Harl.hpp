/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:32:14 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/13 21:32:14 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

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