#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./HarlFilter [level]" << std::endl;
        return (0);
    }

    Harl harl;
    int level;

    // fct pour retourner le numéro du level 
    level = 3;
    switch (level)
    {
        case 0:
            
    }
    // switch en fonction de level

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("");
}