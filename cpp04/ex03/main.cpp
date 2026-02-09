# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

int main()
{
    AMateria* ptr = new AMateria("Ice");
    std::cout << "Type: " << ptr->getType() << std::endl;
    delete ptr;

    Ice ice;
    std::cout << "Type: " << ice.getType() << std::endl;

    Cure cure;
    std::cout << "Type: " << cure.getType() << std::endl;

}