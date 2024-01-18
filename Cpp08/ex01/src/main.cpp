#include "Span.hpp"


int	main()
{
	Span S(4);
	Span S2(4);

	try{
		S2.addNumber(-1);

		S.addNumber(2);
		S.addNumber(8);
		S.addNumber(-1);
		S.addNumber(-1);
		//out of range after that
		S.addNumber(-19);
		S.addNumber(1);
		S.addNumber(1);
		S.addNumber(1);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl; 
	}
	try{
		std::cout << S.longestSpan() << std::endl;
		std::cout << S.shortestSpan() << std::endl;
		std::cout << S2.longestSpan() << std::endl;
	}
		catch (std::exception& e){
		std::cout << e.what() << std::endl; 
	}
}
