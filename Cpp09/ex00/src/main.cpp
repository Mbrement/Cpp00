#include "../header/BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error  : wrong input" << std::endl;
		return 1;
	}
	
	try {
		BitcoinExchange test(argv[1]);
		test.run();
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}	
	return 0;
}
