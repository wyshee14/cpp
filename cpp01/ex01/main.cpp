# include "Zombie.hpp"

int main()
{
    int size = 5;
    Zombie* arr = zombieHorde(size, "Zombiesssssss");
    for (int i = 0; i < size; i++)
    {
        arr[i].announce();
    }
    delete[] arr;

    return 0;
}