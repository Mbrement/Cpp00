#include "../header/Bureaucrat.hpp"
#include "../header/Form.hpp"
#include <exception>



int	main(void)
{
	Bureaucrat PDG("PDH", 0);
	Form test("test", 3, 10);
	// Form yay("test", 3, 155);

	std::cout << test <<std::endl;
	PDG.signForm(test);
	std::cout << test <<std::endl;
	return 0;
}
