#include "Span.hpp"


Span::Span( void ){ }

Span::Span( unsigned int n ) : _N(n){ }

Span::~Span( void ){ }

Span::Span(Span const & toCopy){

	*this = toCopy;
}

Span    &Span::operator=(Span const & toCopy){

    this->_N = toCopy.getN();

    return(*this);
}

unsigned int    Span::getN( void )const
{
    return(this->_N);
}

int    Span::getNumber( int index )const
{
    return(this->_array[index]);
}

void    Span::addNumber(int number)
{
    if (_array.size() + 1 > this->getN())
        throw Span::NoSpaceException();
    this->_array.push_back(number);
}

// calculer la taille de l'array 

int     Span::shortestSpan( )
{

    if (this->_array.size() <= 1)
        throw Span::SpanNotFound();
    std::vector<int>temp = this->_array;
    std::sort(temp.begin(), temp.end());
    for (unsigned int i = 0; sizeof(this->_array); i++)
    {

    }
    int shortestSpan;
    return(shortestSpan);
}

int     Span::longestSpan( )   // max - min 
{
    if (this->_array.size() <= 1)
        throw Span::SpanNotFound();   // check what is used in containers
    int longestSpan = *std::max_element(_array.begin(), _array.end()) 
        - *std::min_element(_array.begin(), _array.end());
    std::cout << longestSpan << std::endl;
    return(longestSpan);
}