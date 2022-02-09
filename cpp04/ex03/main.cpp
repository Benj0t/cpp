#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main(void)
{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter	*me = new Character("me");
	AMateria	*tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "TEST USING COPY ID" << std::endl;
	ICharacter	*bob = new Character("bob");
	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "TEST USING WRONG ID" << std::endl;
	me->use(3, *me);
	me->use(42, *me);
	me->use(-42, *bob);
	me->unequip(1);
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;
	std::cout << std::endl;

	delete tmp;
	delete bob;
	delete me;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "TEST USING COPY CONSTRUCTOR" << std::endl;
	std::cout << std::endl;
	Character *cloud = new Character();
	Character toto("toto");
	cloud->equip(src->createMateria("ice"));
	cloud->equip(src->createMateria("fire")); // Should not work
	cloud->equip(src->createMateria("cure"));
	{
		Character	cloud2(*cloud);
		delete cloud;
		std::cout << std::endl;
		cloud2.use(0, toto);
		cloud2.use(1, toto);
		cloud2.use(2, toto); // should print nothing because fire doesnt work
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "END OF THE TESTS" << std::endl << std::endl;
	delete src;
	return (0);
}