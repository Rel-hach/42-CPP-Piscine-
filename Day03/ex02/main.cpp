#include "FragTrap.hpp"

int main ()
{
    std::cout <<  "-   CONSTRUCTING :" << std::endl << std::endl;
    FragTrap No1;
    FragTrap No2("[NINJA]");

    std::cout << "-   TESTING :" << std::endl << std::endl;
    No1.attack(No2.getName());
    No2.takeDamage(No1.getDamage());


    No2.attack(No1.getName());
    No1.takeDamage(No2.getDamage());

    No1.beRepaired(10);
    No2.beRepaired(10);

    No2.highFivesGuys();
    No1.highFivesGuys();
    
    // for(int i = 0; i < 10; i++)
    // {
    //     No2.attack(No1.getName());
    //     No1.takeDamage(No1.getDamage());
    // }

    /*------------------------------------------*/

    {
        ClapTrap *ptr = new FragTrap();
        delete ptr;
    }

    /*------------------------------------------*/

    std::cout << "-   DESTRUCTING :" << std::endl << std::endl;
}