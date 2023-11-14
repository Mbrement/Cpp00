/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:29:01 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/13 21:29:02 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{

public :
	Zombie();
	~Zombie();
	void annonce(void);
	Zombie* zombieHorde( int N, std::string name);
	void giveName(const std::string &name);
private	:
	std::string name;
};
#endif