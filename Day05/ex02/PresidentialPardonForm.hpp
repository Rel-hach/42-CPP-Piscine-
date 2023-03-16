#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(std::string);
        PresidentialPardonForm(const PresidentialPardonForm& obj);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator = (const PresidentialPardonForm& obj);
        void execute(Bureaucrat const & executor);
};


#endif