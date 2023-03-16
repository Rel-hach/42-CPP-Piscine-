#include "AForm.hpp"

    AForm::AForm() : _name("Default"), _gradeSign(150), _gradeExec(150), _signed(false)
    {
        std::cout << "Default constructor .. " << std::endl;
    }

    AForm& AForm::operator=(const AForm& rhs)
    {
        if (this != &rhs)
        {
            this->_signed = rhs._signed;
        }
        return (*this);
    }

    AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(false)
    {
        std::cout << "Parametrized Constructor called .. " << std::endl;
    }

    std::string AForm::getName() const
    {
        return (_name);
    }

    int AForm::getGradeSign() const
    {
        return (_gradeSign);
    }

    int AForm::getGradeExec() const
    {
        return (_gradeExec);
    }

    bool AForm::getIfSignedchecker() const
    {
        return (_signed);
    }

    AForm::~AForm()
    {
        std::cout << "Destructor is called .. " << std::endl;
    }

    void AForm::beSigned(const Bureaucrat &signer)
    {
        if (signer.getGrade() > this->_gradeSign)
            throw AForm::GradeTooLowException();
        else if (this->_signed == false)
        {
            this->_signed = true;
            std::cout << signer.getName() << " signed " << this->_name << std::endl;
        }
        else
            std::cout << this->_name << " is already signed .." << std::endl;
    }