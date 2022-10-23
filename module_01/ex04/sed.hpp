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

    private:
    std::string _fileName;
    std::string _s1;
    std::string _s2;

    public:
    Sed( std::string _fileName, std::string _s1, std::string _s2 );
    ~Sed(void);
};
#endif