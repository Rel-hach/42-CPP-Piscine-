#include "ClapTrap.hpp"

    ClapTrap::ClapTrap() : _name("[DEFAULT]"), _HitPoint(10) , _EnergyPoint(10) , _Damage(0)
    {
        std::cout << "* ClapTrap * : Default constructor is called: " << std::endl;
        std::cout << "  New ClapTrap is created, called " << _name;
        std::cout << " has " << _EnergyPoint << " Energy points, ";
        std::cout << _HitPoint << " Hit Points and does " << _Damage <<" damage" << std::endl << std::endl;
    }

    ClapTrap::ClapTrap(std::string name) : _name(name) , _HitPoint(10) , _EnergyPoint(10) , _Damage(0)
    {
        std::cout << "* ClapTrap * : Parametrized constructor :" << std::endl;
        std::cout << "  New ClapTrap is created, called " << _name;
        std::cout << " has " << _EnergyPoint << " Energy points, ";
        std::cout << _HitPoint << " Hit Points and does " << _Damage <<" damage" << std::endl << std::endl;
    }

    ClapTrap::ClapTrap(ClapTrap const &cp)
    {
        std::cout << "* ClapTrap * : Copy constructor called ." << std::endl;
        if (this != &cp)
        {
            *this = cp;
        }
    }

    ClapTrap& ClapTrap::operator =( const ClapTrap &r )
    {
        std::cout << "* ClapTrap * : Copy assignment Operator called " << std::endl;
        if (this != &r)
        {
            this->_name = r._name;
            this->_EnergyPoint = r._EnergyPoint;
            this->_HitPoint = r._EnergyPoint;
            this->_Damage = r._Damage;
        }
        return (*this);
    }

    ClapTrap::~ClapTrap()
    {
        std::cout << "* ClapTrap * : Destructor is called ." << std::endl << std::endl;
    }

    void ClapTrap::attack(const std::string& target)
    {
        if (this->_EnergyPoint == 0)
        {
            std::cout << this->_name << " couldn't attack " << target << ", he lost all his energy-points" << std::endl << std::endl;
            std::cout << _EnergyPoint << std::endl;
        }
        else if (this->_HitPoint == 0)
            std::cout << this->_name << " couldn't attack " << target << ", he lost all his hit-points" << std::endl << std::endl;
        else if (this->_EnergyPoint > 0 && this->_HitPoint > 0)
        {
            std::cout << this->_name << " attacks " << target << ", causing " << _Damage << " points of damage !" << std::endl << std::endl;
            this->_EnergyPoint--;
        }
    }

    void ClapTrap::takeDamage(unsigned int amount)
    {
        if (this->_HitPoint == 0)
            std::cout << this->_name << " coudn't take damage : no more hit points." << std::endl << std::endl;
        else if (this->_HitPoint >= amount)
        {
            this->_HitPoint -= amount;
            std::cout << this->_name << " took " << amount << " of Damage points " << std::endl << std::endl;
        }
        else if (this->_HitPoint < amount)
            this->_HitPoint = 0;
    }

    void ClapTrap::beRepaired(unsigned int amount)
    {
        if (this->_EnergyPoint == 0)
            std::cout << this->_name << " couldn't be repaired : no more energy Points." << std::endl << std::endl;
        else if (this->_HitPoint == 0)
            std::cout << this->_name << " couldn't be repaired : no more hit points." << std::endl << std::endl;
        else if (this->_EnergyPoint > 0 && this->_HitPoint > 0)
        {
            this->_HitPoint += amount;
            std::cout << this->_name << " repaired itself and got " << amount << " new hit points" << std::endl << std::endl; 
            this->_EnergyPoint--;
        }
    }

    std::string ClapTrap::getName() const
    {
        return (this->_name);
    }

    unsigned int ClapTrap::getDamage() const
    {
        return (this->_Damage);
    }