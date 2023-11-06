#include "../header/Bureaucrat.hpp"
#include "../header/AForm.hpp"
#include "../header/ShrubberyCreationForm.hpp"
#include "../header/RobotomyRequestForm.hpp"
#include "../header/PresidentialPardonForm.hpp"
#include "../header/Intern.hpp"
#include <exception>
#include <iostream>

int	main(void)
{
ShrubberyCreationForm Tree("a random tree");
PresidentialPardonForm forgiven("my cat");
RobotomyRequestForm robot("somebody you used to know");
Bureaucrat PDG("PDG", 1);
Intern randomPeon;
Form *newForm;
Tree.Signed(PDG);
robot.Signed(PDG);
forgiven.Signed(PDG);
try {
robot.execute(PDG);
forgiven.execute(PDG);
Tree.execute(PDG);
}
catch (std::exception &e)
{
	std::cout << "An erreur happen" << std::endl;
}
try {
newForm = randomPeon.makeForm("test", "NO");
delete newForm;
}
catch(std::exception &e)
{
	std::cout << e.what() << std::endl;
}
newForm = randomPeon.makeForm("RobotomyRequestForm", "NO");
newForm->Signed(PDG);
newForm->execute(PDG);
delete newForm;
	return 0;
}
