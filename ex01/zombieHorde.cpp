#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return NULL;
        
    Zombie  *z = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        z[i].setName(name);
        i++;
    }
    return z;
}