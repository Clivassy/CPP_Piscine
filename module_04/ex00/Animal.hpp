#ifndef ANIMAL_H
#define ANIMAL_H

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

class Animal{

    protected:
        std::string _type;

    public:
        Animal( void );
        Animal( std::string type );
        virtual ~Animal( void );
        Animal( const Animal &copy ); 
        Animal &operator=( Animal const &copy );
        std::string getType( void )const;
        virtual void    makeSound( void )const;
};
#endif