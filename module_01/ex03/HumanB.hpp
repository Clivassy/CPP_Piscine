#ifndef HUMANB_H
#define HUMANB_H

//------ librairies------------
#include <iostream>
#include "Weapon.hpp"
#include <string>
//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class HumanB {

    private:
    std::string _name;
    Weapon *_weapon;

    public:
    std::string getName( void )const;
    void        setName( std::string _name );
    void        attack( void )const;
    void        setWeapon(Weapon &weapon);
    HumanB( std::string _name );
    ~HumanB( void );
};
#endif