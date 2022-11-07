#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Big("Big");
    ClapTrap Boss("Boss");

    ClapTrap ByCopy(Boss);
    ClapTrap ByDefault;

    std::cout << Big;
    std::cout << Boss;

    Big.attack("Boss");
    std::cout << Big;
    std::cout << Boss;
    
    //Boss.takeDamage(10);
    //std::cout << Boss;

    for (int i = 0; i < 10; i++)
    {
        Boss.attack("Big");
    }
    std::cout << Boss;

    Boss.attack("Big");
    Boss.beRepaired(2);
    Boss.takeDamage(3);

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