#include "ClapTrap.hpp"

int main()
{
    ClapTrap ByDefault;
    ClapTrap player("Boss");
    ClapTrap ByCopy(player);

    std::cout << ByDefault;

    std::cout << player;
    player.attack("Big Boss");
    std::cout << player;
    player.takeDamage(3);
    std::cout << player;
    player.beRepaired(2);
    std::cout << player;

    std::cout << "     Object par copie     " << std::endl;
    std::cout << ByCopy;

    std::cout << "     Assignation objet     " << std::endl;
    ByDefault = player;
    std::cout << ByDefault;

    player.takeDamage(10);
    std::cout << player;
    
    /*player.attack("Big Boss");
    player.attack("Big Boss");
    player.attack("Big Boss");
    player.attack("Big Boss");
    player.attack("Big Boss");
    player.attack("Big Boss");
    player.attack("Big Boss");
    player.attack("Big Boss");*/

    player.attack("Big Boss");
    player.beRepaired(2);
    player.takeDamage(3);
}