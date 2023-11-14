/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:31:35 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/13 21:31:41 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{

public :
	void complain (const std::string &level);
	typedef void    (*ptr_func)(void);

private	:
	static void	debug (void);
	static void	info (void);
	static void	warning (void);
	static void	error (void);
};
#endif