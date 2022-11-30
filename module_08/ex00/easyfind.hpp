#ifndef EASYFIND_HPP
#define EASYFIND_HPP

//------ librairies------------
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <iterator>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class InexistingElementException : public std::exception {
    
    public:
	virtual const char* what() const throw()
	{
	    return ( RED "Element does not exist" CLEAR );
	}
};

template< typename T> 
typename T::iterator   easyfind( T &array, int number){

    if (std::find(array.begin(), array.end(), number )!= array.end())
        return(std::find(array.begin(), array.end(), number));
    else
        throw InexistingElementException();
}
#endif
