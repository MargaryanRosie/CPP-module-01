#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
        std::string _name;
        Weapon& _weapon;     //stores the actual weapon objet, not the copy
public:
        HumanA(std::string name, Weapon& weapon);
        void    attack();

        void    setName(std::string name);

        std::string getName();
        
};

#endif