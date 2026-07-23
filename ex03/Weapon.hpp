#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
        std::string type;
public:
        const std::string& getType();      //const doesnt allow the caller to change the value

        void    setType(std::string newType);
};

#endif