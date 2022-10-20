#ifndef ZOMBIE_H
#define ZOMBIE_H

//------ librairies------------
#include <iostream>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
#define REDB "\e[41m"
//----------------------------


class Zombie {

    private:
    std::string name;

    public:
    void    announce( void );
    Zombie* newZombie( std:: string name);
    void    randomChump( std:: string name );
    Zombie(void); // constructor
    ~Zombie(void); // destructor
};
#endif