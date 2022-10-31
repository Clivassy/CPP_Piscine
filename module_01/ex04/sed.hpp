#ifndef SED_H
#define SED_H

//------ librairies------------
#include <iostream>
#include <string>
#include <fstream>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class Sed {
    public:
    void    sedReplace( std::string file, std::string str1, std::string str2 );
    Sed( void );
    ~Sed( void );
};
#endif