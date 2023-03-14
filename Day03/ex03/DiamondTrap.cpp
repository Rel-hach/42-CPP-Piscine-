#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("DEFAULT-DT_Clap_name")
{
    this->_name = "[DEFAULT-DT]";
    this->_HitPoint = FragTrap::_HitPoint;
    this->_EnergyPoint = ScavTrap::_EnergyPoint;
    this->_Damage = FragTrap::_Damage;
    std::cout << "* DiamondTrap * : Default constructor is called ." << std::endl;
    std::cout << "  New DiamondTrap is created, called " << this->_name;
    std::cout << " has " << this->_EnergyPoint << " Energy points, ";
    std::cout << this->_HitPoint << " Hit Points and does " << this->_Damage <<" damage" << std::endl << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "* DiamondTrap * : Destructor is called .. " << std::endl << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "Clap_name")
{
    this->_name = name;
    this->_HitPoint = FragTrap::_HitPoint;
    this->_EnergyPoint = ScavTrap::_EnergyPoint;
    this->_Damage = FragTrap::_Damage;
    std::cout << "* DiamondTrap * : Default constructor is called ." << std::endl;
    std::cout << "  New DiamondTrap is created, called " << this->_name;
    std::cout << " has " << this->_EnergyPoint << " Energy points, ";
    std::cout << this->_HitPoint << " Hit Points and does " << this->_Damage <<" damage" << std::endl << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs) : ClapTrap(rhs), ScavTrap(rhs), FragTrap(rhs) // shows error if copy constructor overloding function without const
{
    std::cout << "* DiamondTrap * : Copy constructor called ." << std::endl;
    if (this != &rhs)
    {
        *this = rhs;
    }
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) 
{
    std::cout << "* DiamondTrap * : Copy assignment Operator called " << std::endl << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_HitPoint = rhs._HitPoint;
        this->_EnergyPoint = rhs._HitPoint;
        this->_Damage = rhs._Damage;
    }
    return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << this->_name << std::endl;
    std::cout << "and My parent class is " << ClapTrap::_name <<std::endl<<std::endl;
}