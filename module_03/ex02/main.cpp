#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void    ClapTrap::printPlayer(ClapTrap Player)
{
    std::cout << "Player name " << Player.getName() << std::endl;
    std::cout << "Damages: " << Player.getAttackDamage() << std::endl;
    std::cout << "Energy points: " << Player.getEnergyPoints() << std::endl;
    std::cout << "Hit points: " << Player.getHitPoints() << std::endl;
}

int main()
{
   // ClapTrap ByDefault;
   // ClapTrap ByCopy;
   // ClapTrap player("Julia");

  //  ScavTrap scavtrap;
  //  ScavTrap scavtrap2("Julio");

    FragTrap scavtrap;
    FragTrap scavtrap2("Julio");
    scavtrap2.attack("Léo");
    scavtrap2.highFivesGuys();
    // scavtrap2.guardGate();
   // scavtrap2.printPlayer(scavtrap2);
   // scavtrap2.attack("Léo");
    // scavtrap2.guardGate();
 /*   player.takeDamage(3);
    player.printPlayer(player);
    player.beRepaired(2);
    player.printPlayer(player);
    ByCopy = player;
    player.printPlayer(ByCopy);*/
}