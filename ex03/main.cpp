#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main()
/*
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}
*/
/*
{
	MateriaSource src;

	src.learnMateria(new Ice());
	src.learnMateria(new Cure());
	src.learnMateria(new Ice());
	src.learnMateria(new Cure());
	src.learnMateria(new Ice());

	AMateria* m = src.createMateria("ice");
	if (m)
		std::cout << "Created ice\n";
	else
		std::cout << "Failed\n";

	delete m;
}
*/
/*
{
	MateriaSource src;
	src.learnMateria(new Ice());

	AMateria* m = src.createMateria("fire");
	if (!m)
		std::cout << "NULL OK\n";
}
*/
/*
{
	Character a("A");
	a.equip(new Ice());
	a.equip(new Cure());

	Character b(a);

	a.use(0, a);
	b.use(0, b);
}
*/
/*
{
	Character a("A");
	a.equip(new Ice());

	Character b("B");
	b = a;

	a.use(0, a);
	b.use(0, b);
}
*/
/*
{
	Character me("me");
	AMateria* ice = new Ice();

	me.equip(ice);
	me.unequip(0);

	ice->use(me);

	delete ice;
}
*/
