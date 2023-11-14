/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrement <mbrement@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:31:21 by mbrement          #+#    #+#             */
/*   Updated: 2023/11/13 21:31:21 by mbrement         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>


int main (int argc, char **argv)
{
	std::ifstream targetFile;
	std::ofstream newFile;
	std::string fileName;
	std::string targetString;
	std::string replaceString;
	if (argc != 4)
	{
		std::cout << "Wrong number of argument" << std::endl;
		return (1);
	}
	if (!argv[2][0])
	{
		std::cout << "Invalid argument" << std::endl;
		return (1);
	}
	fileName.assign(argv[1]);
	targetString = argv[2];
	replaceString = argv[3];
	targetFile.open(argv[1]);
	if (!targetFile)
	{
		std::cout << "Coulnd't read " << argv[1] << std::endl;
		return (1);
	}
	fileName = fileName + ".remplace";
	newFile.open(fileName.c_str(), std::ios::out | std::ios::trunc);
	if (!newFile)
	{
		std::cout << "Coulnd't read " << fileName << std::endl;
		targetFile.close();
		return (1);
	}
	size_t current;
	std::string	line;
	while (std::getline(targetFile, line))
	{
		current = 0;
		while ((current = line.find(targetString, current)) != std::string::npos)
		{
			line.erase(current, targetString.size());
			line.insert(current, replaceString);
			current += replaceString.size();
		}
		newFile << line << std::endl;
	}
	targetFile.close();
	newFile.close();
	return (0);
}