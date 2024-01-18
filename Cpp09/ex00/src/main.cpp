#include "../header/BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error  : wrong input" << std::endl;
		return 1;
	}
	// std::fstream data;
	// data.open(argv[1], std::fstream::in);
	// if (!data.is_open())
	// {
	// 	std::cout << "Error  : Can't find data" << std::endl;
	// 	return 1;
	// }
	
	try{
	BitcoinExchange test(argv[1]);
	test.run();
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}	
	// std::string a = "2024-01-15";
	// std::string b = "2024-01-13";
	// std::map<std::string, int> m;
	// m.size();
	// if (a < b)
	// 	std::cout << "a < b";
	// else
	// 	std::cout << "a > b";
	return 0;
}
