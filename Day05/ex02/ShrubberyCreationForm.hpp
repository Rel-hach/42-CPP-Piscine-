#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

#define ASCII_tree  "\
                    **\n\
                   ****\n\
                  ******\n\
                 ********\n\
                **********\n\
               ************\n\
              **************\n\
             ****************\n\
               ************\n\
              **************\n\
             ****************\n\
            ******************\n\
           ********************\n\
                   ****\n\
                   ****\n\
                   ****\n\
                   ****\n\
"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string);
        ShrubberyCreationForm(const ShrubberyCreationForm& obj);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm& operator = (const ShrubberyCreationForm& obj);
        void execute(Bureaucrat const & executor);
        std::string getTargetName() const;
};

#endif