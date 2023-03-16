#include "Form.hpp"

    Form::Form() : _name("Default"), _gradeSign(150), _gradeExec(150), _signed(false)
    {
        std::cout << "Default constructor .. " << std::endl;
    }

    Form& Form::operator=(const Form& rhs)
    {
        if (this != &rhs)
        {
            this->_signed = rhs._signed;
        }
        return (*this);
    }

    Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signed(false)
    {
        std::cout << "Parametrized Constructor called .. " << std::endl;
    }

    std::string Form::getName() const
    {
        return (_name);
    }

    int Form::getGradeSign() const
    {
        return (_gradeSign);
    }

    int Form::getGradeExec() const
    {
        return (_gradeExec);
    }

    bool Form::getIfSignedchecker() const
    {
        return (_signed);
    }

    Form::~Form()
    {
        std::cout << "Destructor is called .. " << std::endl;
    }

    void Form::beSigned(Bureaucrat &b)
    {
        if (b.getGrade() <= this->_gradeSign)
            this->_signed = true;
    }


    void Form::signForm(Bureaucrat &b)
    {
        std::string reason = ", Because its Grade is too low than the form grade";
        if (this->_signed)
            std::cout << b.getName() << " signed " << this->_name << std::endl;
        else
            std::cout << b.getName() << " couldn't sign " << this->_name << reason << std::endl;
    }
