#include "RPN.hpp"


int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cout <<"Too many argument" << std::endl;
	else
		RPN::run(argv + 1);

		// std::getline();
return 0;
}
