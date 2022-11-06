#ifndef FIXED_H
#define FIXED_H

//------ librairies------------
#include <iostream>
#include <string>
#include <cmath>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class Fixed{

    private:
    int _nbValue;
    static int const _nbBits = 8;

    public:
    Fixed( void );
    ~Fixed( void );
    Fixed( const Fixed& toCopy ); // constructeur par copie 
    Fixed( const float _nbBits );
    Fixed( const int _nbInt );
    Fixed &operator=(Fixed const &Copy);
    int     getRawBits( void )const;
    void    setRawBits( int const raw );
    float   toFloat( void )const;
    int     toInt( void )const; 
};

std::ostream &operator<<( std::ostream &out, Fixed const &input ); // surcharge opérateur
#endif