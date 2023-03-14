#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_name = "[DEFAULT-ST]";
    this->_HitPoint = 100;
    this->_EnergyPoint = 50;
    this->_Damage = 20;
    std::cout << "* ScavTrap * : Default constructor is called ." << std::endl;
    std::cout << "  New ScavTrap is created, called [ " << this->_name;
    std::cout << " ] has " << this->_EnergyPoint << " Energy points, ";
    std::cout << this->_HitPoint << " Hit Points and does " << this->_Damage <<" damage" << std::endl << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_HitPoint = 100;
    this->_EnergyPoint = 50;
    this->_Damage = 20;
    std::cout << "* ScavTrap * : String constructor is called ." << std::endl;
    std::cout << "  New ScavTrap is created, called [ " << this->_name;
    std::cout << " ] has " << this->_EnergyPoint << " Energy points, ";
    std::cout << this->_HitPoint << " Hit Points and does " << this->_Damage <<" damage" << std::endl << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "* ScavTrap * : Destructor called" << std::endl << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) : ClapTrap(rhs)
{
    std::cout << "* ScavTrap * : Copy constructor called ." << std::endl << std::endl;
    if (this != &rhs)
        *this = rhs;
}

ScavTrap& ScavTrap::operator =(const ScavTrap &r)
{
    std::cout << "* ScavTrap * : Copy assignment Operator called " << std::endl << std::endl;
    if (this != &r)
    {
        this->_name = r._name;
        this->_HitPoint = r._HitPoint;
        this->_EnergyPoint = r._HitPoint;
        this->_Damage = r._Damage;
    }
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    ClapTrap::attack(target);
    std::cout << "  The Attack is made by The new Robot [ ScavTrap ]" << std::endl << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "* ScavTrap * : " << this->_name << " is NOW in Gatekeeper mode" << std::endl << std::endl;
}