#include "../header/Bureaucrat.hpp"
#include "../header/Form.hpp"
#include <exception>



int	main(void)
{
	Bureaucrat PDG("PDH", 1);
		try{
	Form test("w", 3, 155);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Form test("test", 3, 10);

	std::cout << test <<std::endl;
	PDG.signForm(test);
	std::cout << test <<std::endl;
	return 0;
}
