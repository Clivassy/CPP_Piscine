#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{

    DiamondTrap Big("Big");
    DiamondTrap Boss("Boss");

    std::cout << Big;
    std::cout << Boss;

    Big.attack("Boss");
    std::cout << Big;
    
    //Boss.takeDamage(100);
    //std::cout << Boss;

    for (int i = 0; i < 50; i++)
    {
        Boss.attack("Big");
    }
    std::cout << Boss;

    Boss.attack("Big");
    Boss.beRepaired(2);
    Boss.takeDamage(3);

    Big.highFivesGuys();
    Big.guardGate();

    Big.takeDamage(2);
    std::cout << Big;
    Big.beRepaired(2);
    std::cout << Big;
}