#ifndef ARRAY_HPP
#define ARRAY_HPP

//------ librairies------------
#include <iostream>
#include <exception>
#include <iostream>
#include <cstdlib>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

#define MAX_VAL 50

template< typename T> 
void    printArray( T &array, unsigned int size, std::string msg){

    std::cout << std::endl;
    std::cout << GREEN "-------------  " << msg << " -----------------------" CLEAR << std::endl;
    for (unsigned int i = 0; i < size; i++)
    {
        std::cout << array[i] << " | ";
    }
    std::cout << std::endl;
}

template< typename T> 
class Array {
    public:
        Array( void ) // Constructor by default => create empty array
        {
            this->_size = 0;
            this->_array = new T[0];
        
        }
        Array( unsigned int n){ // Constructor create array of size N
            this->_size = n;
            this->_array = new T[n];
        }
        ~Array( void ){
                delete []_array;
        }
        // Copy Constructor
        Array(Array const & toCopy){

        	this->_array = NULL;
			*this = toCopy;
        }
        // Overload Operator =
        Array& operator=(Array const & toCopy){

            if (this->_array)
                delete [] this->_array;
            this->_size = toCopy.size();
            this->_array = new T[toCopy.size()];
            for (unsigned int i = 0; i < toCopy.size(); i++){
                this->_array[i] = toCopy._array[i];
            }
            return (*this);
        }
        // Overload Operator []
        T &operator[](unsigned int n){
            if (n >= _size or n < 0)
                throw InvalidIndexException();
            return(this->_array[n]);
        }
        // FCT membre
        unsigned int    size(void) const {
			return (this->_size);
		}
        // Exception 
    	class InvalidIndexException : public std::exception {
			public:
        	    virtual const char* what() const throw()
        	    {
        		    return (RED "Invalid index" CLEAR);
        		}
		};

    private:
        unsigned int _size;
        T *_array;

};
#endif