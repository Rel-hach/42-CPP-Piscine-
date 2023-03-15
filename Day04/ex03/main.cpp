#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"

int main ()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->unequip(1);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;

    // IMateriaSource *src = new MateriaSource();

	// std::cout << "---------SET Materia------------" << std::endl;


	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Ice());

	// std::cout << "---------GET Materia------------" << std::endl;

	// AMateria *Ice1 = src->createMateria("ice");
	// AMateria *Cure1 = src->createMateria("cure");
	// // AMateria *Ice2 = src->createMateria("ice");
	// // AMateria *Cure2 = src->createMateria("cure");

	// std::cout << "---------CREATE Person------------" << std::endl;
	
	// ICharacter *Rasheed = new Character("RASHEED");
	// ICharacter *Someone = new Character("Someone");

	// Rasheed->equip(Cure1);
	// Rasheed->equip(Ice1);

	// Rasheed->use(0, *Someone);
	// Rasheed->use(1, *Someone);
	// Rasheed->unequip(1);
	// Rasheed->use(1, *Someone);

}