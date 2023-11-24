#include "../header/Bureaucrat.hpp"
#include "../header/Form.hpp"
#include <exception>



int	main(void)
{
	Bureaucrat PDG("PDG", 0);
	Form test("test", 3, 10);

	std::cout << test <<std::endl;
	PDG.signForm(test);
	std::cout << test <<std::endl;
	return 0;
}
