#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon w;
    w.setType("Type 1");
    Weapon& weapon = w;
    HumanA human_a("Bob", weapon);

    human_a.attack();

    Weapon w2;
    w2.setType("Type 2");
    HumanB human_b("Jean");

    human_b.setWeapon(&w2);

    human_b.attack();

    return 0;
}