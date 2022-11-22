#include "Conversion.hpp"

Conversion::Conversion( void )
: _nbInt(0), _nbFloat(0), _nbDouble(0), _isValidChar(true), _isValidInt(true), _isValidFloat(true), _isPrintable(true)
{
    //
}

Conversion::~Conversion (void )
{
    //
}

Conversion::Conversion( const Conversion &copy )
{
    *this = copy;
}

Conversion &Conversion::operator=( Conversion const &copy )
{
    this->_input = copy.getInput();
    this->_character = copy.getChar();
    this->_nbInt = copy.getInt();
    this->_nbFloat = copy.getFloat();
    this->_nbDouble = copy.getDouble();
    return(*this);
}

// GETTEURS 
std::string    Conversion::getInput( void )const
{
    return(this->_input);
}

char        Conversion::getChar( void )const
{
    return(this->_character);
}

int    Conversion::getInt( void )const
{
    return(this->_nbInt);
}

float    Conversion::getFloat( void )const
{
    return(this->_nbFloat);
}

double    Conversion::getDouble( void)const
{
    return(this->_nbDouble);
}

// implicit cast : ne fonctionne que dans des contexte de conversion et d'upcast
//(ex: passer un double en int)

// static cast : peut ete utiliser en conversion de valeur siples et en cas d'upcast et downcast
// permet d'empecher les cast entre classes qui ne sont pas du meme arbre d'heritage

// dynamic cast : le seul qui a lieu a l'execution du code . 

// const cast : presque jamais utilisé

// reinterpret_cast : cast le plus libre , permet de faire des reinterpretation mais sans check.