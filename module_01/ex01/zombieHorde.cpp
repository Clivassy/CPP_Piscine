#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name ){

    if (N <= 0)
    {
        std::cout << RED "Error: N must be a valid integer" CLEAR << std::endl;
        return (NULL);
    }
    std::cout << YELLOW << "---------- CREATING ZOMBIES HORDE -------------" CLEAR << std::endl;
    
    Zombie *Horde = new Zombie[N];
    if (!Horde)
        return (NULL);
    for (int i = 0; i < N; i++)
    {
        Horde[i].setName(name);
    }
    return (Horde);
}