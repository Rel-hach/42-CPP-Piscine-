#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class   ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        virtual ~ScavTrap();
        ScavTrap(const ScavTrap &rhs);
        ScavTrap& operator =(const ScavTrap &rhs);
        void attack(const std::string& target);
        void guardGate();
};

#endif