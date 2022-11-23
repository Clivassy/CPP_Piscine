#ifndef DATA_H
#define DATA_H

//------ librairies------------
#include <iomanip>
#include <iostream>
#include <stdint.h>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

// STRUCT
struct Data
{
    int nb;
    char c;
    bool isValid;
    void *ptr;
    std::string str;
};

// FCT
uintptr_t   serialize( Data* ptr );
Data*       deserialize( uintptr_t raw );
void        initializeData( Data *data );
void        printDataContent( Data *data );

#endif