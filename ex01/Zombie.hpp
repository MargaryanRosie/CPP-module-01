#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
        std::string _name;
public:
        void    setName(std::string name);

        std::string    getName();

        Zombie( void );
        void announce( void );
        ~Zombie( void );
};

Zombie* zombieHorde( int N, std::string name );
#endif