#ifndef BASE_H
#define BASE_H

//------ librairies------------
#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <ctime>
#include <cstdlib>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class Base{

    public:
        Base( void );
        virtual ~Base( void );
};

class A : public Base{

    // empty
    // no need to create a constructor, default constructor will
    // be enough
};

class B : public Base{
    // empty
};

class C : public Base{
    // empty
};

// FCT
Base *generate( void );
void identify(Base* p);
void identify(Base& p);

#endif