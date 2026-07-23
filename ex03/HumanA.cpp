#include "HumanA.hpp"


void    HumanA::setName(std::string name)
{
    _name = name;
}

std::string HumanA::getName()
{
    return _name;
}


void    HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon):_name(name), _weapon(weapon)     //we use init list because when the construcor is called
                                                                                 //before entering the body, the object is created, and if there is init list
                                                                                //the object is initilaized with that values
{
}