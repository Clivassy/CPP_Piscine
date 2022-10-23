#ifndef WEAPON_H
#define WEAPON_H

//------ librairies------------
#include <iostream>
#include <string>
//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class Weapon {

    private:
    std::string _type;

    public:
    const std::string& getType(void);
    void        setType(std::string _type);
    Weapon( std::string _type );
    ~Weapon(void);
};
#endif