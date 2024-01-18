#include "../header/ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(): AForm()
{
	std::string tmp;
	tmp = "ShrubberyCreationFormName";
	this->changeName(tmp);
	changeCanExec(137);
	changeCanSign(145);
	_target = "ShrubberyCreationFormDefault";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): AForm()
{
	std::string tmp;
	tmp = "ShrubberyCreationFormName";
	this->changeName(tmp);
	changeCanExec(137);
	changeCanSign(145);
	_target = target;
}

    ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other)
{
	std::string tmp;
	tmp = other.getName();
	this->changeName(tmp);
	changeCanExec(other.getCanExec());
	changeCanSign(other.getCanSign());
	changeSignature(other.getSignature());
	_target = other._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &other)
{
	std::string tmp;
	tmp = other.getName();
	this->changeName(tmp);
	changeCanExec(other.getCanExec());
	changeCanSign(other.getCanSign());
	changeSignature(other.getSignature());
	_target = other._target;
	return(*this);
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getCanExec())
		throw GradeTooLowException();
	if (!this->getSignature())
		throw AFormNotSigned();
	std::cout << executor.getName() << " execute " << getName()  << std::endl;
	executeCurrent();
}

void ShrubberyCreationForm::executeCurrent() const
{
	std::string tree =
"     ccee88oo          \n"
"  C8O8O8Q8PoOb o8oo    \n"
" dOB69QO8PdUOpugoO9bD  \n"
"CgggbU8OU qOp qOdoUOdcb\n"
"   6OuU  /p u gcoUodpP \n"
"      \\\\//  /douUP   \n"
"        \\\\////       \n"
"         |||/\\        \n"
"         |||\\/        \n"
"         |||||         \n"
"  .....\\//||||\\....  \n";

std::string target;
target = this->_target + "__shrubbery";
std::ofstream	ofs(target.c_str());
if (!ofs.is_open())
{
	std::cout << "Coulnd't open the output file" << std::endl;
	return ;
}
ofs << tree;
}