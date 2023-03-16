#include "RobotomyRequestForm.hpp"

static int number;

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default")
{
    std::cout << "Default constructor is called .." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 145, 137), _target(target)
{
    std::cout << "string constructor is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm("RobotomyRequestForm", 145, 137)
{
    std::cout << "Copy Constructor is called" << std::endl;
    if (this != &obj)
        *this = obj;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm: Destructor is called .." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& obj)
{
    if (this != &obj)
        this->_target = obj._target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
    else if (this->getIfSignedchecker() == false)
        throw (AForm::FormNotSignedException());
    else
    {
        if (number % 2 == 0)
            std::cout << this->_target <<" has been succesfully robotomized .." << std::endl;
        else
            std::cout << this->_target <<" has been failed to robotomized .." << std::endl;
        number++;
    }
}


