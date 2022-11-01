#include "ClapTrap.hpp"

void    ClapTrap::printPlayer(ClapTrap Player)
{
    std::cout << "Player name " << Player.getName() << std::endl;
    std::cout << "Damages: " << Player.getAttackDamage() << std::endl;
    std::cout << "Energy points: " << Player.getEnergyPoints() << std::endl;
    std::cout << "Hit points: " << Player.getHitPoints() << std::endl;
}

int main()
{
    ClapTrap ByDefault;
    ClapTrap ByCopy;
    ClapTrap player("Julia");
    
    player.printPlayer(player);
    player.attack("Léo");
    player.takeDamage(3);
    player.printPlayer(player);
    player.beRepaired(2);
    player.printPlayer(player);
    ByCopy = player;
    player.printPlayer(ByCopy);
}