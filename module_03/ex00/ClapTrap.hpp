#ifndef CLAPTRAP_H
#define CLAPTRAP_H

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

class ClapTrap{

    private:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

    public:
    ClapTrap( void );
    ClapTrap( std::string name );
    ~ClapTrap( void );
    ClapTrap( const ClapTrap &copy ); // constructeur par copie 
    ClapTrap &operator=( ClapTrap const &copy );
    
    std::string getName(void) const;
    unsigned int getHitPoints(void )const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getAttackDamage(void) const;

    void attack( const std::string& target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );
};
std::ostream &operator<<( std::ostream &out, ClapTrap const &input );
#endif