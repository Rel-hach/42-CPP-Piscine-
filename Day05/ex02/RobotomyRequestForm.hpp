#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string);
        RobotomyRequestForm(const RobotomyRequestForm& obj);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator = (const RobotomyRequestForm& obj);
        void execute(Bureaucrat const & executor);
};


#endif