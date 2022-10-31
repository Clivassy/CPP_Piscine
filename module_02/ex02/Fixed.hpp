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
    Fixed( const Fixed& copy ); // constructeur par copie 
    Fixed( const float _nbBits );
    Fixed( const int _nbInt );
    static Fixed		&min(Fixed &elem1, Fixed &elem2);
	static Fixed const	&min(Fixed const &elem1, Fixed const &elem2);
	static Fixed		&max(Fixed &elem1, Fixed &elem2);
	static Fixed const	&max(Fixed const &elem1, Fixed const &elem2);

    // +, -, /, *, = 
    Fixed   &operator=( Fixed const &elem );
    Fixed   operator+( Fixed const &elem );
    Fixed   operator-( Fixed const &elem );
    Fixed   operator*( Fixed const &elem );
    Fixed   operator/( Fixed const &elem );
    
    bool    operator>(Fixed const &elem) const;
    bool    operator<(Fixed const &elem) const;
    bool    operator>=(Fixed const &elem) const;
    bool    operator<=(Fixed const &elem) const;
    bool    operator==(Fixed const &elem) const;
    bool    operator!=(Fixed const &elem) const;

    Fixed operator++(int);
    Fixed operator--(int);
    Fixed &operator++();
    Fixed &operator--();

    int     getRawBits( void )const;
    void    setRawBits( int const raw );
    float   toFloat( void )const;
    int     toInt( void )const; 
};

std::ostream &operator<<( std::ostream &out, Fixed const &input ); // surcharge opérateur
#endif