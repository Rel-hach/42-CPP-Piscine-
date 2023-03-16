#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 145, 137), _target("Default")
{
    std::cout << "Default constructor is called .." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "string constructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "Copy Constructor is called" << std::endl;
    if (this != &obj)
        *this = obj;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm: Destructor is called .." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& obj)
{
    if (this != &obj)
        this->_target = obj._target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
    else if (this->getIfSignedchecker() == false)
        throw (AForm::FormNotSignedException());
    else
        std::cout << this->_target << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}


