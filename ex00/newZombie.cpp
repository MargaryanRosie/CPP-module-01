#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *z = new Zombie(name);
    //1)allocates memory for the Zombie objject
    //2)calls Zombie's constructor, so that the constructor sets _name = name
    return z;
}