#include "Zombie.hpp"

Zombie   *newZombie( std::string name )
{
    Zombie *newZombie = new Zombie(name);
    if (!newZombie)
        return (NULL);
    return (newZombie);
}