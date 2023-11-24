#include "../header/Bureaucrat.hpp"



int	main(void)
{
	Bureaucrat pape;
	Bureaucrat PDG("PDG", 15);
	std::cout << PDG << std::endl;
	PDG.decrement();
	std::cout << PDG << std::endl;
	PDG.increment();
	std::cout << PDG << std::endl;
	std::cout << PDG << std::endl;
	std::cout << pape << std::endl;
	return (0);
}
