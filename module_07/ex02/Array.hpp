#ifndef ARRAY_HPP
#define ARRAY_HPP

//------ librairies------------
#include <iostream>
#include <exception>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
//----------------------------

template< typename T> 
class Array {
    public:
        Array( void ){
            this->_size = 0;
            this->_array = new T[0]; // create empty array
        }
        // constructeur prenant size N en paramètre
        Array( unsigned int n){
            this->_size = n;
            this->_array = new T[n];
        }
        ~Array( void ){
            if (_array)
                delete []_array;
        }
        // constructor by copy 
        Array(Array const & toCopy){

        	this->_array = NULL;
			*this = toCopy;
        }
        // surcharge d'opérateur =
        Array& operator=(Array const & toCopy){

            this->_size = size();
            if (this->_array)
                delete [] this->_array;
            this->_array = new T[size()];
            for (unsigned int i = 0; i < size(); i++){
                this->_array[i] = toCopy._array[i];
            }
            return (*this);
        }

        // surcharge d'opérateur []
        T &operator[](unsigned int n){
            if (n >= _size or n < 0)
                throw InvalidIndexException();
            return(this->_array[n]);
        }
        unsigned int    size(void) const {
			return (this->_size); // fct membre qui retourne le nb d'éléments dans l'array
		}

    	class InvalidIndexException : public std::exception {
			public:
        	    virtual const char* what() const throw()
        	    {
        		    return ("Invalid index");
        		}
		};
    private:
        unsigned int _size;
        T *_array;

};

#endif