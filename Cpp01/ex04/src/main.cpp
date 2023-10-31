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
	fileName = argv[1];
	targetString = argv[2];
	replaceString = argv[3];
	targetFile.open(fileName);
	if (!targetFile)
	{
		std::cout << "Coulnd't read " << argv[1] << std::endl;
		return (1);
	}
	newFile.open(fileName + ".replace", std::ios::out | std::ios::trunc);
	if (!newFile)
	{
		std::cout << "Coulnd't read " << fileName + ".replace" << std::endl;
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