/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 03:34:00 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/14 03:34:02 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public :
/*cannonical form*/
	WrongCat();
	WrongCat(const std::string &name);
	WrongCat (const WrongCat &WrongCat);
	~WrongCat();
	WrongCat	&operator=(const WrongCat &WrongCat);
/*cannonical form*/
	void makeSound();

private	:
	std::string _name;
};
#endif