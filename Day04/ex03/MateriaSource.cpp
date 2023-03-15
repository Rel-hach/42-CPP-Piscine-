#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++) { this->Materia[i] = NULL; }
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
    if (this != &obj)
        *this = obj;
}

MateriaSource& MateriaSource::operator = (const MateriaSource& obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->Materia[i])
                delete this->Materia[i];
            this->Materia[i] = obj.Materia[i];
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->Materia[i])
            delete this->Materia[i];
    }
}

void MateriaSource::learnMateria(AMateria* P)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->Materia[i] == NULL)
        {
            this->Materia[i] = P;
            break ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->Materia[i]->getType() == type)
            return (this->Materia[i]->clone());
    }
    return (NULL);
}