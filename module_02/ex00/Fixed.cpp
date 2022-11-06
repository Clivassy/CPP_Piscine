#include "Fixed.hpp"

Fixed:: Fixed(void): _nbValue(0)
{
    std::cout << "Default constructor called" << std::endl; 
}

Fixed:: Fixed( const Fixed &copy )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
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
    this->_nbValue = raw;
}

Fixed &Fixed::operator=(Fixed const &toCopy)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->_nbValue = toCopy.getRawBits();
	return (*this);
}