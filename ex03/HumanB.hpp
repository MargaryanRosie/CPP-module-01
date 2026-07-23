#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
        std::string _name;
        Weapon* _weapon;     //stores the actual weapon object, not the copy
public:
        HumanB(std::string name);
        void    attack();

        void    setName(std::string name);

        std::string getName();
        void    setWeapon(Weapon& weapon)
        {
            _weapon = &weapon;
        }      
};

#endif