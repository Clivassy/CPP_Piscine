#ifndef HUMANA_H
#define HUMANA_H

//------ librairies------------
#include <iostream>
#include <string>
#include "Weapon.hpp"
//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class HumanA {

    private:
    std::string _name;
    Weapon &_weapon;

    public:
    const std::string getName( void );
    void        setName( std::string _name );
    void        attack( void );
    HumanA( std::string _name, Weapon &_weapon );
    ~HumanA( void );
};
#endif