#include "Zombie.hpp"

 // check les leaks
int main()
{
    Zombie *zombie;
    Zombie zomzom("Big");

    std::cout << YELLOW << "---------- STACK -------------" CLEAR << std::endl;
    zomzom.announce();
    randomChump("Boss");

    std::cout << YELLOW << "---------- HEAP -------------" CLEAR << std::endl;
    zombie = newZombie("Big Boss");
    zombie->announce();
    
    delete zombie;
    std::cout << YELLOW << "-----------------------------" CLEAR << std::endl;
    return(0);
}