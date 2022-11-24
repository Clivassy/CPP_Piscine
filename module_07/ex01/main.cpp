#include "Iter.hpp"

template< typename T> 
void    printElem( T const & elem)
{
    std::cout << elem << std::endl;
}


int main( void){

// Fill les tab avec d'autres fonctions pour les tests;
int tabInt[5] = {2, 3, 4, 5, 8};
std::string tabChar[3] = {"hello", "julia", "ca va"};
float tabFloat[2] = {21.42, 42.21};

int *TabError = NULL;

std::cout << "---------------------------------"<< std::endl;
std::cout << "Tab Of CHAR " << std::endl;
std::cout << "---------------------------------"<< std::endl;
::iter( tabChar, 3, printElem); // Test with tab of Char 
std::cout << "---------------------------------"<< std::endl;
std::cout << "Tab Of INT  " << std::endl;
std::cout << "---------------------------------"<< std::endl;
::iter( tabInt, 5, printElem); // Test with tab of Int
std::cout << "---------------------------------"<< std::endl;
std::cout << "Tab Of FLOAT " << std::endl;
std::cout << "---------------------------------"<< std::endl;
::iter( tabFloat, 2, printElem); // Test with tab of Float

::iter( TabError, 2, printElem); // Test with tab of Float
}