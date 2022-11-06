#ifndef SCAVTRAP_H
#define SCAVTRAP_H

//------ librairies------------
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class ScavTrap : public  virtual ClapTrap
{
    public:
    ScavTrap( void ); 
    ScavTrap( std::string name ); 
    ScavTrap( const ScavTrap &copy );
    ~ScavTrap( void );
    ScavTrap &operator=( ScavTrap const &copy );

    void attack( const std::string& target );
    void guardGate();
};
std::ostream &operator<<(std::ostream &out, ScavTrap const &elem);
#endif