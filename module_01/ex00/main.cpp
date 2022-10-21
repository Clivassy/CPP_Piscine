#include "Zombie.hpp"

int main()
{
    Zombie *zombie;

    std::cout << YELLOW << "---------- STACK -------------" CLEAR << std::endl;
    randomChump("Boss");

    std::cout << YELLOW << "---------- HEAP -------------" CLEAR << std::endl;
    zombie = newZombie("Big Boss");
    zombie->announce();
    
    delete zombie;
    std::cout << YELLOW << "-----------------------------" CLEAR << std::endl;
    return(0);
}