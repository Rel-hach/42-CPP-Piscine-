#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string _name;
        const int _gradeSign;
        const int _gradeExec;
        bool _signed;
    public:
        Form();
        Form& operator=(const Form& rhs);
        Form(std::string name, int gradeSign, int gradeExec);
        std::string getName() const;
        int getGradeSign() const;
        int getGradeExec() const;
        bool getIfSignedchecker() const;
        virtual ~Form();
        void beSigned(Bureaucrat &b);
        void signForm(Bureaucrat &b);

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
};

#endif