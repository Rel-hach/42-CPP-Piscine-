#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("without")
{
    std::cout << "Default constructor is called .." << std::endl;
    _grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) , _grade(grade) 
{
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException ();
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
{
    if (this != &rhs)
        *this = rhs;
}

Bureaucrat& Bureaucrat::operator =(const Bureaucrat& rhs)
{
    if (this != &rhs)
    {
        this->_grade = rhs._grade;
    }
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor is called ~ " << std::endl;
}

void Bureaucrat::increment ()
{
    this->_grade-=1;
    if (this->_grade < 1)
        throw GradeTooHighException ();
    else if (this->_grade > 150)
        throw GradeTooLowException();
}

void Bureaucrat::decrement ()
{
    this->_grade+=1;
    if (this->_grade < 1)
        throw GradeTooHighException ();
    else if (this->_grade > 150)
        throw GradeTooLowException();
}

void Bureaucrat::executeForm(AForm& form)
{
    try
    {
        form.execute(*this);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    } 
}

void Bureaucrat::signForm(AForm& form)
{
    try
    {
        form.beSigned(*this);
    }
    catch(const std::exception& e)
    {
        std::cerr << form.getName() << " is not signed because : "; 
        std::cerr << e.what() << std::endl;
    } 
}


/* -------------------------------------------------------- */


std::ostream& operator << (std::ostream& out, const Bureaucrat& b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return (out);
}
