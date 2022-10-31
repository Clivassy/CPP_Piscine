#include "Fixed.hpp"

Fixed:: Fixed(void): _nbInt(0)
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
    return(_nbInt);
}

void   Fixed::setRawBits( int const raw )
{
    std::cout << "setRawbits member function called" << std::endl;
    this->_nbInt = raw;
}

Fixed &Fixed::operator=(Fixed const &Copy)
{
    std::cout << "Copy assigment operator called" << std::endl;
	if (this != &Copy)
    {
        this->_nbInt = Copy.getRawBits();
    }
	return (*this);
}