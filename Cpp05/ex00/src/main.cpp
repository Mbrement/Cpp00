#include "../header/Bureaucrat.hpp"



int	main(void)
{
	Bureaucrat pape;
	Bureaucrat PDG("PDG", 1);

	std::cout << pape << std::endl;
	std::cout << PDG << std::endl;
	pape.setGrade(2);
	std::cout << pape << std::endl;
	return 0;
}
