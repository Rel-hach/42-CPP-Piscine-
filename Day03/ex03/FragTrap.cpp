#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->_name = "[DEFAULT-FT]";
    this->_HitPoint = 100;
    this->_EnergyPoint = 50;
    this->_Damage = 20;
    std::cout << "* FragTrap * : Default constructor is called ." << std::endl;
    std::cout << "  New FragTrap is created, called [ " << this->_name;
    std::cout << " ] has " << this->_EnergyPoint << " Energy points, ";
    std::cout << this->_HitPoint << " Hit Points and does " << this->_Damage <<" damage" << std::endl << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_HitPoint = 100;
    this->_EnergyPoint = 50;
    this->_Damage = 20;
    std::cout << "* FragTrap * : Default constructor is called ." << std::endl;
    std::cout << "  New FragTrap is created, called [ " << this->_name;
    std::cout << " ] has " << this->_EnergyPoint << " Energy points, ";
    std::cout << this->_HitPoint << " Hit Points and does " << this->_Damage <<" damage" << std::endl << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs) : ClapTrap(rhs)
{
    std::cout << "* FragTrap * : Copy constructor called ." << std::endl << std::endl;
    if (this != &rhs)
        *this = rhs;
}

FragTrap::~FragTrap()
{ 
    std::cout << "* FragTrap *  : Destructor called .." << std::endl << std::endl; 
}

FragTrap& FragTrap::operator = (const FragTrap& r)
{
    std::cout << "* FragTrap *  : Copy assignment Operator called " << std::endl << std::endl;
    if (this != &r)
    {
        this->_name = r._name;
        this->_HitPoint = r._HitPoint;
        this->_EnergyPoint = r._HitPoint;
        this->_Damage = r._Damage;
    }
    return (*this);
}


void FragTrap::highFivesGuys(void)
{
    std::cout << "* FragTrap * : Hei, give me a FIVE!" << std::endl << std::endl;
}