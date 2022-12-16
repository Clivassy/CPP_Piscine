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
{
    std::cout << "Int constructor called" << std::endl; 
    this->_nbValue = nb << _nbBits;
}

Fixed:: Fixed(const float nb) 
{
    std::cout << "Float Constructor called" << std::endl; 
    this->_nbValue = roundf(nb * (1 << this->_nbBits));
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

Fixed &Fixed::operator=(Fixed const &toCopy)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->_nbValue = toCopy.getRawBits();
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