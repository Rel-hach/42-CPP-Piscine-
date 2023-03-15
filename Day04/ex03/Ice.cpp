#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    _type = "ice";
}

Ice::Ice(const Ice& obj) : AMateria(obj)
{
    if (this != &obj)
        *this = obj;
}

Ice& Ice::operator=(const Ice& obj)
{
    if (this != &obj)
    {
        this->_type = obj._type;
    }
    return (*this);
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
    AMateria *instance = new Ice();
    if (instance == NULL)
    {
        std::cout << "Memory allocation failed .." << std::endl;
        return (NULL);
    }
    return (instance);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}