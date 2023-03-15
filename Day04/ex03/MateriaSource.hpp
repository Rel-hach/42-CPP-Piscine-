#ifndef MATERIA_HPP
#define MATERIA_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        int index[4];
        AMateria *Materia[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& obj);
        MateriaSource& operator = (const MateriaSource& obj);
        ~MateriaSource();
        void learnMateria(AMateria* P);
        AMateria* createMateria(std::string const & type);
};

#endif