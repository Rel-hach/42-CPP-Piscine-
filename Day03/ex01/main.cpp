#include "ScavTrap.hpp"

int main ()
{
    std::cout <<  "-   CONSTRUCTING :" << std::endl << std::endl;
    ScavTrap No1;
    ScavTrap No2("[NINJA]");

    std::cout << "-   TESTING :" << std::endl << std::endl;
    No1.attack(No2.getName());
    No2.takeDamage(No1.getDamage());


    No2.attack(No1.getName());
    No1.takeDamage(No2.getDamage());

    No1.beRepaired(10);
    No2.beRepaired(10);

    No2.guardGate();
    No1.guardGate();
    
    // for(int i = 0; i < 10; i++)
    // {
    //     No2.attack(No1.getName());
    //     No1.takeDamage(No1.getDamage());
    // }

    /*------------------------------------------*/

    {
        ClapTrap *ptr = new ScavTrap();
        delete ptr;
    }

    /*------------------------------------------*/

    std::cout << "-   DESTRUCTING :" << std::endl << std::endl;
}