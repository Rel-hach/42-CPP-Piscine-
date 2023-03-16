#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default")
{
    std::cout << "Default constructor is called .." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "Parametrized constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "Copy Constructor is called" << std::endl;
    if (this != &obj)
        *this = obj;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm: Destructor is called .." << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& obj)
{
    if (this != &obj)
        this->_target = obj._target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    if (this->getIfSignedchecker() == false)
        throw (AForm::FormNotSignedException());
    else if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
    else
    {
        std::ofstream outFile(_target.append("_Shrubbery").c_str());
        if (outFile.is_open())
        {
            for (int i = 0; i < 7; i++)
                outFile << ASCII_tree << std::endl;
        }
        else
            std::cout << "File couldn't be opened .. " << std::endl;
        outFile.close();
    }
}


std::string ShrubberyCreationForm::getTargetName() const
{
    return (this->_target);
}
