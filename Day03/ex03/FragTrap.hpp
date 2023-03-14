#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        virtual ~FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& rhs);
        FragTrap& operator = (const FragTrap& rhs);
        void highFivesGuys(void);
};

#endif