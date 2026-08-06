#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
        std::string type;
public:
        const std::string& getType();

        void    setType(std::string newType);

        Weapon(std::string newType);
};

#endif