#ifndef CONVERSION_H
#define CONVERSION_H

//------ librairies------------
#include <iostream>
#include <string>
#include <sstream>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class Conversion{

    private:
        Conversion( void );
        std::string _input;
        char _character;
        int _nbInt;
        float _nbfloat;
        double _nbDouble;

    public:
        Conversion( std::string input );
        ~Conversion ( void );
        Conversion( const Conversion&copy ); 
        Conversion &operator=( Conversion const &copy );

        std::string     getInput( void )const;
        char            getChar( void )const;
        int             getInt( void )const;
        float           getFloat( void )const;
        double          getDouble( void )const;
    // fct getLitteralType 
    // fct de conversion
};
#endif