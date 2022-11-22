#ifndef CONVERSION_H
#define CONVERSION_H

//------ librairies------------
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <limits>
#include <climits>
#include <cfloat>
#include <cmath>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class Conversion{

    public:
        Conversion( void );
        ~Conversion ( void );
        Conversion( const Conversion&copy ); 
        Conversion &operator=( Conversion const &copy );

        // Getters
        std::string     getInput( void )const;
        char            getChar( void )const;
        int             getInt( void )const;
        float           getFloat( void )const;
        double          getDouble( void )const;
        void            convert( std::string input );

        // Conversion
        void            convertChar(std:: string input);
        void            convertInt(std:: string input);
        void            convertFloat(std:: string input);
        void            convertDouble(std:: string input);
        void            printConversion( void );
        void            checkNonAffichableNumber( std::string input );

        // Exception
    	class	ConversionExceptionImpossible : public std::exception{

			public:
				const char *what() const throw(){

					return ("impossible");
				}
		};
        private:
            char        _character;
            int         _nbInt;
            float       _nbFloat;
            double      _nbDouble;
            bool        _isValidChar;
            bool        _isValidInt;
            bool        _isValidFloat;
            bool        _isPrintable;
};
#endif