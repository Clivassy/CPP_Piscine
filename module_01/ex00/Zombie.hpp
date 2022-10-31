#ifndef ZOMBIE_H
#define ZOMBIE_H

//------ librairies------------
#include <iostream>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
//----------------------------

class Zombie {

    private:
    std::string _name;

    public:
    std::string getName(void)const;
    void        setName(std::string name);
    void        announce( void );
    Zombie(std::string name);
    ~Zombie(void);
};

//------ newZombie.cpp ------------
Zombie* newZombie( std:: string name);

//------ randomChump.cpp ------------
void    randomChump( std:: string name );

#endif