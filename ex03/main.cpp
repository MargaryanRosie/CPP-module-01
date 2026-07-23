#include "HumanA.hpp"

int main()
{
    Weapon w;
    w.setType("Type 1");
    Weapon& weapon = w;
    HumanA human_a("Bob", weapon);

    human_a.attack();

    return 0;
}