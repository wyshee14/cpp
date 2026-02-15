# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"
# include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("Ice");
    if (!tmp)
    {
        delete me;
        delete src;
        return 1;
    }
    me->equip(tmp);
    tmp = src->createMateria("cure");
    if (!tmp)
    {
        delete me;
        delete src;
        return 1;
    }
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    // unequip sets the pointer to null, tmp is still exist in memory
    me->unequip(1);
    delete tmp;
    me->use(1, *bob);
    me->use(5, *bob);

    delete bob;
    delete me;
    delete src;

    return 0;
}