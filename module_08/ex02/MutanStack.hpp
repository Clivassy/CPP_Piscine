#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

//------ librairies------------
#include <iostream>
#include <vector>
#include <limits.h>
#include <exception>
#include <algorithm>
#include <cstdlib>
#include <unistd.h>
#include <numeric>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class Span {
    public:
        Span( void );
        Span( unsigned int n );
        ~Span( void );
        Span(Span const & toCopy);
        Span& operator=(Span const & toCopy);
    private:

};
#endif