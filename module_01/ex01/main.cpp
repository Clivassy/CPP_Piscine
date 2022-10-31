#include "Zombie.hpp"

int main()
{
    int numberOfZombies;
    
   numberOfZombies = 1000000000;
   // numberOfZombies = 200;
   // numberOfZombies = 5;
   // numberOfZombies = 0;
   // numberOfZombies = -3;

    Zombie *newHordeOfZombies;

    newHordeOfZombies = zombieHorde(numberOfZombies, "Koko roccoco");
    if (!newHordeOfZombies)
        return(0);
    for (int i = 0; i < numberOfZombies; i++)
    {
        std::cout <<  YELLOW << i << " : " << CLEAR;
        newHordeOfZombies->announce();
    }
    std::cout << YELLOW << "---------- DESTROY ZOMBIES HORDE -------------" CLEAR << std::endl;
    delete [] newHordeOfZombies;
    return(0);
}