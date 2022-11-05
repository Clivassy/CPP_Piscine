#ifndef WRONG_ANIMAL_H
#define WRONG_ANIMAL_H

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

class WrongAnimal{

    private:
    std::string _type;

    public:
    WrongAnimal( void );
    WrongAnimal( std::string name );
    virtual ~WrongAnimal( void );
    WrongAnimal( const WrongAnimal &copy ); // constructeur par copie 
    WrongAnimal &operator=( WrongAnimal const &copy );
    std::string getType( void )const;
    virtual void    makeSound( void )const;
    //getter
    //Setter
};
#endif