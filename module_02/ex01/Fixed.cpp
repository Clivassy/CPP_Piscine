#include "Fixed.hpp"

Fixed:: Fixed(void): _nbValue(0) // constructeur par défaut
{
    std::cout << "Default constructor called" << std::endl; 
}

Fixed:: Fixed( const Fixed &copy ) // constructeur de copie
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed:: Fixed(const int nb) 
// constructeur prenant un int constant en paramètre
// qui convertit cet int en virgule fixe.
{
    std::cout << "Int constructor called" << std::endl; 
    this->_nbValue = nb << _nbBits;
}

Fixed:: Fixed(const float nb) 
// constructeur prenant un float constant en paramètre
{
    std::cout << "Float Constructor called" << std::endl; 
    this->_nbValue = roundf(nb * (1 << this->_nbBits));
    //renvoie l'arrondi entier au plus proche de la valeur spécifiée en paramètre.
}

Fixed::~Fixed( void ) 
{
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits( void )const
{
    std::cout << "getRawbits member function called" << std::endl;
    return(_nbValue);
}

void   Fixed::setRawBits( int const raw )
{
    std::cout << "setRawbits member function called" << std::endl;
    this->_nbValue= raw;
}

Fixed &Fixed::operator=(Fixed const &Copy)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->_nbValue = Copy.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &elem)
{
    out << elem.toFloat();
    return (out);
}

float   Fixed::toFloat( void )const
{
    return ((float)this->_nbValue / (1 << this->_nbBits));
}

int     Fixed::toInt( void )const
{
    return (this->_nbValue >> this->_nbBits);
}