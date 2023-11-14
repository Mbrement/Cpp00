/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:29:47 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/13 21:59:07 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "Pointer value of the string:" << std::hex << &string << std::endl;
	std::cout << "Pointer value of the string pointer:	 " << std::hex << stringPTR << std::endl;
	std::cout << "Pointer value of the string reference: " << std::hex << &stringREF << std::endl;
	
	std::cout << "Content  of the string:			 " << string << std::endl;
	std::cout << "Content  of the string pointer:	 " << *stringPTR << std::endl;
	std::cout << "Content  of the string reference:	 " << stringREF << std::endl;
	return (0);
}