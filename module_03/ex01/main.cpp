#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap Big("Big");
    ScavTrap Boss("Boss");

    ClapTrap ByCopy(Boss);
    ClapTrap ByDefault;

    std::cout << Big;
    std::cout << Boss;

    Big.attack("Boss");
    std::cout << Big;
    std::cout << Boss;
    
    Boss.takeDamage(100);
    std::cout << Boss;

    /*for (int i = 0; i < 50; i++)
    {
        Boss.attack("Big");
    }
    std::cout << Boss;*/

    Boss.attack("Big");
    Boss.beRepaired(2);
    Boss.takeDamage(3);

    Big.guardGate();

    std::cout << "     Object par copie     " << std::endl;
    std::cout << ByCopy;

    std::cout << "     Assignation objet     " << std::endl;
    ByDefault = Big;
    std::cout << ByDefault;

    Big.takeDamage(2);
    std::cout << Big;
    Big.beRepaired(2);
    std::cout << Big;
}