#include "Harl.hpp"

void    Harl::debug()
{
    std::cout << "I love having extra bacon for my "
    "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
                    "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for "
                    "years whereas you started working here since last month." << std::endl;
}

void    Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    int     i;

    std::string comments[4];
    comments[0] = "DEBUG";
    comments[1] = "INFO";
    comments[2] = "WARNING";
    comments[3] = "ERROR";

    void (Harl::*functions[4]) ();
    functions[0] = &Harl::debug;
    functions[1] = &Harl::info;
    functions[2] = &Harl::warning;
    functions[3] = &Harl::error;

    i = 0;
    while(i < 4)
    {
        if (level == comments[i])
        {
            (this->*functions[i])();
            break;
        }
        i++;
    }
}