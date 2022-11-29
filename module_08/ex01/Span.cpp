#include "Span.hpp"
Span::Span( void ){ }

Span::Span( unsigned int n ) : _N(n){ }

Span::~Span( void ){ }

Span::Span(Span const & toCopy)
{
    if (this != &toCopy)
    {
	    *this = toCopy;
    }
}

Span    &Span::operator=(Span const & toCopy){

    this->_N = toCopy.getN();
    this->_array = toCopy._array;
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
    if (_array.size() >= this->_N)
        throw Span::NoSpaceException();
    this->_array.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	for (std::vector<int>::iterator it = first ; it < last; it++) {
		if (_array.size() >= this->_N)
			throw Span::NoSpaceException();
		this->_array.push_back(*it);
	}
}

int     Span::shortestSpan( void )
{
    if (this->_array.size() <= 1)
        throw Span::SpanNotFound();

    long (*longabs)(long) = &std::abs;
	long shortest = INT_MAX;

	std::vector<int> temp(_array);
	std::sort(temp.begin(), temp.end());

	for (std::vector<int>::const_iterator it = temp.begin(); it != temp.end() - 1; ++it)
        shortest = std::min(shortest, longabs(*it + 1) - longabs(*it));
	return (shortest);
}

unsigned int    Span::difference( void )
{
    unsigned int min = *(std::min_element(this->_array.begin(), this->_array.end()));
	unsigned int max = *(std::max_element(this->_array.begin(), this->_array.end()));
    return (max - min);
}


int     Span::longestSpan( void )
{
    if (this->_array.size() <= 1)
        throw Span::SpanNotFound();
    return (difference());
}