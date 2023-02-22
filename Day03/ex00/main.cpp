#include "ClapTrap.hpp"

int main ()
{
    ClapTrap No1("First-ClapTrap");
    ClapTrap No2("Second-ClapTrap");

    No1.attack(No2.getName());
    No2.takeDamage(No1.getDamage());
    No2.attack(No1.getName());
    No1.takeDamage(No2.getDamage());
    No1.beRepaired(5);
    No2.beRepaired(5);
}