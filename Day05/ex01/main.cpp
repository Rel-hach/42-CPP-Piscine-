#include "Form.hpp"
#include "Bureaucrat.hpp"

int main ()
{
    // try
    // {
    //     Bureaucrat k("name", 150);
    //     k.decrement();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cout << e.what() <<std::endl;
    // }
    // Bureaucrat k("AHMED", 150);
    // std::cout << k << std::endl;

    // {
    //     Bureaucrat A("name", 55);
    //     std::cout << A << std::endl;
    // }
    // try { Bureaucrat A("name", 55);
    // std::cout << A << std::endl;} catch (const std::exception &e){       
    // std::cout << e.what() << std::endl; }

    Bureaucrat A("Bureauc",61);

    Form f("FormName", 60, 50);
    f.beSigned(A);
    f.signForm(A);

}