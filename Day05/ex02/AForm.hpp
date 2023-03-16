#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        const int _gradeSign;
        const int _gradeExec;
        bool _signed;
    public:
        AForm();
        AForm& operator=(const AForm& rhs);
        AForm(std::string name, int gradeSign, int gradeExec);
        std::string getName() const;
        int getGradeSign() const;
        int getGradeExec() const;
        bool getIfSignedchecker() const;
        virtual ~AForm();
        void beSigned(const Bureaucrat &b);
        virtual void execute(Bureaucrat const & executor) = 0;

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("The Grade is too heigh .. ");
                }
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("The Grade is too Low .. ");
                }
        };

        class FormNotSignedException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("Form is not signed");
                }
        };
};

#endif