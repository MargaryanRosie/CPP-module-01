#include "HumanB.hpp"

void    HumanB::setName(std::string name)
{
    _name = name;
}

std::string HumanB::getName()
{
    return _name;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
} 

void    HumanB::attack()
{
    if (_weapon != 0)
    {
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    }
    else
        std::cout << _name << " has no weapon to attack with" << std::endl;
}

HumanB::HumanB(std::string name)  
{
    _name = name;
    _weapon = 0;
}