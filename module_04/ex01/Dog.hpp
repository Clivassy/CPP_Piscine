#ifndef DOG_H
#define DOG_H

//------ librairies------------
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class Dog : public Animal
{
    private:
    Brain*  _brain;

    public:
    Dog( void );
    Dog( std::string type );
    Dog( const Dog &copy );
    Dog &operator=( Dog const &copy );
    ~Dog( void );
    
    void    makeSound( void ) const;
    void    printIdeas( int index )const;
    Brain*  getBrain( void )const;
};
#endif