#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap ByDefault;
    FragTrap player("Boss");
    FragTrap ByCopy(player);

    /*ClapTrap Test;
    Test.attack("Julia");
    std::cout << Test;

    ScavTrap Test2;
    Test2.attack("Julia");
    std::cout << Test2;
    std::cout << ByDefault;*/

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
    player.highFivesGuys(); 
   std::cout << std::endl;

    player.takeDamage(100);
    std::cout << player;
    
   /* for (int i = 0; i < 98; i++)
    {
        player.attack("Big Boss");
    }*/
    player.attack("Big Boss");
    player.beRepaired(2);
    player.takeDamage(3);
}