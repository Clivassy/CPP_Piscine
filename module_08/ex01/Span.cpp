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

int     Span::shortestSpan( void ) // reprendre mon ancienne fct 
{
    if (this->_array.size() <= 1)
        throw Span::SpanNotFound();
    
    long shortest = INT_MAX;
	std::vector<int>temp(_array);
	std::sort(temp.begin(), temp.end());

	for (std::vector<int>::iterator it = temp.begin(); it != temp.end() ; it++)
    {   
      /* if (abs(*it + 1) - abs(*it) < 0 and abs(*it + 1) - abs(*it) < shortest)
        {
            shortest = abs(*it + 1) - abs(*it);
            shortest -= shortest;
        }*/
        std::vector<int>::iterator save = it;
       // std::cout << *save << std::endl;
        //std::cout << abs(*it) << std::endl;
        //std::cout << "next |  " << std::endl;
         if ((*save - abs(*it) ) < shortest)
        {
            shortest = *save - abs(*it);
            std::cout << shortest << std::endl;
        }
        //std::min(shortest, static_cast<long>(*it + 1) - static_cast<long>(*it));
        //if (shortest < 0)
          //  shortest -= shortest;
        
    }
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