#ifndef FIXED_H
#define FIXED_H

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

class Fixed{

    private:
    int _nbInt;
    static int const _nbBits = 8;

    public:
    int     getRawBits( void )const;
    void    setRawBits( int const raw );
    Fixed   &operator=(Fixed const &Copy); // surcharge d'opérateur d'affectation
    Fixed( void );
    Fixed( const Fixed& copy );
    ~Fixed(void);

};
#endif