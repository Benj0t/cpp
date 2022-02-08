#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure"); // SEGV SORTIE INDEX
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(0);
	me->use(0, *bob);
	me->use(2, *bob);

	delete bob;
	delete me;
	delete src;

	return (0);
}

/*
int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
AMateria* tmp2;
tmp2 = src->createMateria("cure");
me->equip(tmp2);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
std::cout << std::endl;
me->unequip(0);
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
delete tmp;
return 0;
}*/