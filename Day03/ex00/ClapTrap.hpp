#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string         _name;
        unsigned int        _HitPoint;
        unsigned int        _EnergyPoint;
        unsigned int        _Damage;
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &cp);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName() const;
        unsigned int getDamage() const;
        ClapTrap& operator =( const ClapTrap &r );
};

#endif