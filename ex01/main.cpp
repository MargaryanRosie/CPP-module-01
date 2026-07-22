#include "Zombie.hpp"

int main()
{
    Zombie *z = zombieHorde(5, "Bob");
    std::cout << z[3].getName() << std::endl;

    delete[] z;
    return 0;
}