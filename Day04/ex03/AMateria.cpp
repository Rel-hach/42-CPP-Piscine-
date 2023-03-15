#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
}

AMateria::AMateria(const AMateria& inst)
{
    if (this != &inst)
        *this = inst;
}

AMateria& AMateria::operator =(const AMateria& cp)
{
    if (this != &cp)
    {
        this->_type = cp._type;
    }
    return (*this);
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}