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
//----------------------------

class Zombie {

    private:
    std::string _name;

    public:
    std::string getName(void)const;
    void        setName(std::string name);
    void        announce( void );
    Zombie();
    ~Zombie(void);
};

Zombie*    zombieHorde( int N, std::string name );

#endif