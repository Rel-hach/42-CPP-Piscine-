#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++) { this->inventory[i] = NULL; }
    this->_name = "Default";
}

Character::Character(std::string name)
{
    for (int i = 0; i < 4; i++) { this->inventory[i] = NULL; }
    this->_name = name;
}

Character::Character(const Character& obj)
{
    if (this == &obj)
        *this = obj;
}

Character& Character::operator = (const Character& obj)
{
    if (this == &obj)
    {
        this->_name = obj._name;
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i])
                delete this->inventory[i];
            this->inventory[i] = obj.inventory[i];
        }
    }
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete this->inventory[i]; 
    }
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            break ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3 && this->inventory[idx] != NULL)
        this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3 && this->inventory[idx] != NULL)
        this->inventory[idx]->use(target);
}
