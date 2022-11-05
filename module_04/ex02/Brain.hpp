#ifndef BRAIN_H
#define BRAIN_H

//------ librairies------------
#include <iostream>
#include <string>
#include "AAnimal.hpp"

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class Brain
{
    public:
    std::string ideas[100];
    Brain( void );
    ~Brain( void );
    Brain( const Brain &copy ); // constructeur par copie 
    void operator=( Brain const &toCopy );
};
#endif