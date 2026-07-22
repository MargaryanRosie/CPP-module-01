#include "Zombie.hpp"

void    Zombie::setName(std::string name)
{
    _name = name;
}

std::string    Zombie::getName()
{
    return _name;
}


void    Zombie::announce( void ) {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
    _name = "";
}

Zombie::~Zombie()
{
    std::cout << _name << " destroyed\n";
}
