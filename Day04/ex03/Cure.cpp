#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    _type = "cure";
    // std::cout << "Cure : Default constructor is called. it created a Cure Materia " << std::endl;
}

Cure::Cure(const Cure& obj) : AMateria(obj)
{
    if (this != &obj)
        *this = obj;
}

Cure& Cure::operator=(const Cure& obj)
{
    if (this != &obj)
    {
        this->_type = obj._type;
    }
    return (*this);
}

Cure::~Cure()
{
    //std::cout << "Cure : Destructor is called. it destroyed a Cure Materia" << std::endl;
}

AMateria* Cure::clone() const
{
    // std::cout << "A new Cure Materia has been generated and cloned" << std::endl;
    AMateria *instance = new (std::nothrow)Cure();
    if (instance == NULL)
    {
        std::cout << "Memory allocation failed .. " << std::endl;
        return (NULL);
    }
    return (instance);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}