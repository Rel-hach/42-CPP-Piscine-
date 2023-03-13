#include "ClapTrap.hpp"

int main ()
{
    std::cout <<  "-   CONSTRUCTING :" << std::endl << std::endl;
    ClapTrap Ninja1;
    ClapTrap Ninja2("[NINJA]");

    std::cout << "-   TESTING :" << std::endl << std::endl;
    Ninja1.attack(Ninja2.getName());
    Ninja2.takeDamage(Ninja1.getDamage());

    Ninja2.attack(Ninja1.getName());
    Ninja1.takeDamage(Ninja2.getDamage());

    Ninja1.beRepaired(5);
    Ninja2.beRepaired(5);

    for(int i = 0; i < 9; i++)
        Ninja2.attack(Ninja1.getName());

    std::cout << "-   DESTRUCTING :" << std::endl << std::endl;
}