#ifndef HARL_H
#define HARL_H

//------ librairies------------
#include <iostream>
#include <string>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class Harl {

    private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );

    public:
    void    complain( std::string level ); 
    Harl( void );
    ~Harl( void );
};
#endif