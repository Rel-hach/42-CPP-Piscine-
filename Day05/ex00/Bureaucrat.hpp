#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define HIGHEST_GRADE 1
#define  LOWEST_GRADE 150

#include <iostream>

class Bureaucrat
{
    private:
        const std::string _name;
        int               _grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &rhs);
        Bureaucrat& operator = (const Bureaucrat& rhs);
        ~Bureaucrat();
        std::string getName() const;
        int getGrade() const;
        void increment ();
        void decrement ();

class GradeTooHighException : public std::exception
{
    public:
        const char* what( void ) const throw();
};

class GradeTooLowException : public std::exception
{
    public:
        const char* what( void ) const throw();
};

};

std::ostream& operator << (std::ostream& out, const Bureaucrat& b);

#endif