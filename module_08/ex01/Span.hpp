#ifndef SPAN_HPP
#define SPAN_HPP

//------ librairies------------
#include <iostream>
#include <vector>
#include <limits.h>
#include <exception>
#include <algorithm>
#include <cstdlib>
#include <unistd.h>
#include <numeric>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class Span {
    public:
        Span( void );
        Span( unsigned int n );
        ~Span( void );
        Span(Span const & toCopy);
        Span& operator=(Span const & toCopy);

        // METHODS 
        void            addNumber( int number);
        void		    addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
        int             shortestSpan( void );
        int             longestSpan( void );
        unsigned int    difference( void );

        // EXCEPTIONS 
    	class NoSpaceException : public std::exception {
			public:
        	    virtual const char* what() const throw()
        	    {
        		    return (RED "Array can't stock another number" CLEAR);
        		}
		};
        class SpanNotFound : public std::exception {
			public:
        	    virtual const char* what() const throw()
        	    {
        		    return (RED "Not enough numbers in array to perform span function" CLEAR);
        		}
		};

        // GETTEURS
        unsigned int    getN( void )const;
        int             getNumber( int index )const;

    private:
        std::vector<int> _array;
        unsigned int _N;
};
#endif