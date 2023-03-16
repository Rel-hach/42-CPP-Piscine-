#include "Bureaucrat.hpp"

int main ()
{
    int a = 150;
    try
    {
        Bureaucrat k("name", a);
        k.decrement();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() <<std::endl;
    }
    Bureaucrat k("AHMED", 150);
    std::cout << k << std::endl;

    // {
    //     Bureaucrat A("name", 55);
    //     std::cout << A << std::endl;
    // }
    // try { Bureaucrat A("name", 55);
    // std::cout << A << std::endl;} catch (const std::exception& e){       
    // std::cout << e.what() << std::endl; }
    //   try { Bureaucrat A("name", 170);
    // std::cout << A << std::endl;} catch (const std::exception& e){       
    // std::cout << e.what() << std::endl; }
}