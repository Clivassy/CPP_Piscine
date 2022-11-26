#ifndef ITER_HPP
#define ITER_HPP

//------ librairies------------
#include <iostream>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
//----------------------------

template< typename T> 
void    iter(T const *tab , std::size_t size, void(*fct)(T const & )) {

    if (size <= 0 or !tab)
        return;
    for (size_t i = 0; i < size; i++){
        fct(tab[i]);
    }
}

#endif
