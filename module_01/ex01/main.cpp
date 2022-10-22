#include "Zombie.hpp"

int main()
{
    int numberOfZombies = 10;
    Zombie *newHordeOfZombies;

    std::cout << YELLOW << "---------- CREATING ZOMBIES HORDE -------------" CLEAR << std::endl;
    newHordeOfZombies = zombieHorde(numberOfZombies, "Koko roccoco");

    for (int i = 0; i < numberOfZombies; i++)
    {
        std::cout <<  YELLOW << i << " : " << CLEAR;
        newHordeOfZombies->announce();
    }
    std::cout << YELLOW << "---------- DESTROY ZOMBIES HORDE -------------" CLEAR << std::endl;
    delete [] newHordeOfZombies;
    return(0);
}