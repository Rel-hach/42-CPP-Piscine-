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



/*--------------------------------------------------------------------------*/

const char* Bureaucrat::GradeTooHighException::what( void ) const throw()
{
    return ("The Grade is too heigh .. ");
}


const char* Bureaucrat::GradeTooLowException::what( void ) const throw()
{
    return ("The Grade is too Low .. ");
}


/*--------------------------------------------------------------------------*/


std::ostream& operator << (std::ostream& out, const Bureaucrat& b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return (out);
}
