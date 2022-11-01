#include "Fixed.hpp"

Fixed:: Fixed(void): _nbValue(0) // constructeur par défaut
{
    //std::cout << "Default constructor called" << std::endl; 
}

Fixed:: Fixed( const Fixed &copy ) // constructeur de copie
{
   // std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed:: Fixed(const int nb) 
// constructeur prenant un int constant en paramètre
// qui convertit cet int en virgule fixe.
{
   // std::cout << "Int constructor called" << std::endl; 
    this->_nbValue = nb << _nbBits;
}

Fixed:: Fixed(const float nb) 
// constructeur prenant un float constant en paramètre

{
   // std::cout << "Float Constructor called" << std::endl; 
    this->_nbValue = roundf(nb * (1 << this->_nbBits));
}

Fixed::~Fixed( void ) 
{
   // std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits( void )const
{
  //  std::cout << "getRawbits member function called" << std::endl;
    return(_nbValue);
}

void   Fixed::setRawBits( int const raw )
{
   // std::cout << "setRawbits member function called" << std::endl;
    this->_nbValue= raw;
}

// ---- Arithmetic operations ----------
Fixed &Fixed::operator=(Fixed const &Copy)
{
   // std::cout << "Copy assigment operator called" << std::endl;
    this->_nbValue = Copy.getRawBits();
	return (*this);
}

Fixed   Fixed::operator+( Fixed const &elem )
{
    return (Fixed(this->_nbValue + elem.getRawBits()));
}

Fixed   Fixed::operator-( Fixed const &elem )
{
    return (Fixed(this->_nbValue - elem.getRawBits()));
}

Fixed   Fixed::operator*( Fixed const &elem )
{
    return (Fixed(this->toFloat() * elem.toFloat()));
}

Fixed   Fixed::operator/( Fixed const &elem )
{
    // Cas du 0 ?? 
    return (Fixed(this->toFloat() / elem.toFloat()));
}

float   Fixed::toFloat( void )const
{
    return ((float)this->_nbValue / (1 << this->_nbBits));
}

int     Fixed::toInt( void )const
{
    return (this->_nbValue >> this->_nbBits);
}

// ---- Post and pre operations ----------

Fixed Fixed::operator++(int)
{
    Fixed	tmp(*this);
	this->_nbValue = this->_nbValue + 1;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->_nbValue = this->_nbValue - 1;
	return (tmp);
}

Fixed   &Fixed::operator++()
{
    this->_nbValue = this->_nbValue + 1;
    return(*this);
}

Fixed &Fixed::operator--()
{
    this->_nbValue = this->_nbValue - 1;
    return(*this);
}

// ---- Comparison operations ----------

bool	Fixed::operator>(Fixed const &elem)const
{
    if (this->_nbValue > elem.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &elem)const
{
    if (this->_nbValue < elem.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &elem)const
{
    if (this->_nbValue >= elem.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &elem)const
{
    if (this->_nbValue <= elem.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &elem)const
{
	if (this->_nbValue == elem.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &elem)const
{
    if (this->_nbValue != elem.getRawBits())
		return (true);
	return (false);
}

// ---- functions to check biggest or smallest ----------
Fixed		&Fixed::min(Fixed &elem1, Fixed &elem2)
{
    if (elem1 < elem2)
        return(elem1);
    return (elem2);
}

Fixed const	&Fixed::min(Fixed const &elem1, Fixed const &elem2)
{
    if (elem1 < elem2)
        return(elem1);
    return (elem2);
}

Fixed		&Fixed::max(Fixed &elem1, Fixed &elem2)
{
    if (elem1 > elem2)
        return(elem1);
    return (elem2);
}

Fixed const	&Fixed::max(Fixed const &elem1, Fixed const &elem2)
{
    if (elem1 > elem2)
        return(elem1);
    return (elem2);
}

std::ostream &operator<<(std::ostream &out, Fixed const &elem)
{
    out << elem.toFloat();
    return (out);
}