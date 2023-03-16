#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


void	SCF()
{
	std::cout << "               Test : ShrubberyCreationForm " << std::endl;
	Bureaucrat	tim("Tim", 138);
	ShrubberyCreationForm	sf("town");
	//std::cout << tim << std::endl;
	//std::cout << sf << std::endl;
	tim.executeForm(sf);
	tim.signForm(sf);
	//std::cout << sf << std::endl;
	tim.executeForm(sf);
	tim.increment();
	tim.executeForm(sf);
}

// void	RRF()
// {
// 	std::cout << "               Test : RobotomyRequestForm " << std::endl;
// 	Bureaucrat	div("div", 46);
// 	RobotomyRequestForm	rrf("Bender");
// 	std::cout << div << std::endl;
// 	std::cout << rrf << std::endl;
// 	div.executeForm(rrf);
// 	div.signForm(rrf);
// 	std::cout << rrf << std::endl;
// 	div.executeForm(rrf);
// 	div.increaseGrade();
// 	div.executeForm(rrf);
// }

// void	PPF()
// {
// 	std::cout << "               Test : PresidentialPardonForm " << std::endl;
// 	Bureaucrat	tom("tom", 6);
// 	PresidentialPardonForm	ppf("iva");
// 	std::cout << tom << std::endl;
// 	std::cout << ppf << std::endl;
// 	tom.executeForm(ppf);
// 	tom.signForm(ppf);
// 	std::cout << ppf << std::endl;
// 	tom.executeForm(ppf);
// 	tom.increaseGrade();
// 	tom.executeForm(ppf);
// }


int main()
{
	SCF();
	std::cout << std::endl;
	// RRF();
	// std::cout << std::endl;
	// PPF();
	// std::cout << std::endl;
}
