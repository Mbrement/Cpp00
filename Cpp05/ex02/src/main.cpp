#include "../header/Bureaucrat.hpp"
#include "../header/AForm.hpp"
#include "../header/ShrubberyCreationForm.hpp"
#include "../header/RobotomyRequestForm.hpp"
#include "../header/PresidentialPardonForm.hpp"
#include <exception>

int	main(void)
{
ShrubberyCreationForm Tree("a random tree");
PresidentialPardonForm forgiven("my cat");
RobotomyRequestForm robot("somebody you used to know");
Bureaucrat PDG("PDG", 1);
Tree.Signed(PDG);
robot.Signed(PDG);
forgiven.Signed(PDG);
try {
robot.execuInternte(PDG);
forgiven.execute(PDG);
Tree.execute(PDG);
}
catch (std::exception &e)
{
	std::cout << "An erreur happen" << std::endl;
}
	return 0;
}
