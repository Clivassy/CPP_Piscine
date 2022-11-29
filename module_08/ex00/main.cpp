#include "easyfind.hpp"
/* -------------------------------------------------------------------------
ITERATORS :
- Access the STL container elements and perform certain operation on them
- There are used to point to the memory adresses of the STL containers
- Need to declare iterator std::vector<int>::iterator it en fct du type stocké dans le conteneur
sur lequel on va itérer.
------------------------------------------------------------------------------*/

int main( void ){

    int Tofind = 16;

    std::vector<int>array;

    for (int i = 0; i < 10; i++){
        array.push_back(i);
    }
    try
    {
        std::vector<int>::iterator it =  easyfind(array, Tofind);
        std::cout << "Found : " << *it << " " << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}