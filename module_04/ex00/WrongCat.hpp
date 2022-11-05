#ifndef WRONG_CAT_H
#define WRONG_CAT_H

//------ librairies------------
#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class WrongCat : public WrongAnimal
{
    private:
    std::string _type;

    public:
    WrongCat( void );
    WrongCat( std::string type );
    ~WrongCat( void );
    std::string getType( void ) const;
    //getter
    //Setter
};

#endif
