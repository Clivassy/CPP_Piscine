#include "Conversion.hpp"

bool    isInvalidInput(std::string input, int type)
{
    bool foundFloat = false;
    bool foundSign = false;

    for(size_t i = 0; i < input.size(); i++)
    {
        if (!isdigit(input[i]))
        {
            if (type == INT)
            {
                if (foundSign == true)
                    return(true);
                foundSign = true;
            }
            if (type == FLOAT and input[i] != '.')
            {
                if (foundFloat == true)
                    return(true);
                if (input[i] == 'f')
                    foundFloat = true;
                else
                    return (true);
            }
            if ((type == DOUBLE and input[i] != '.'))
                return(true);
        }
    }
    return(false);
}

Conversion::Conversion( void )
: _nbInt(0), _nbFloat(0), _nbDouble(0), _isValidChar(true), _isValidInt(true), _isValidFloat(true), _isPrintable(true)
{ }

Conversion::~Conversion (void ){ }

Conversion::Conversion( const Conversion &copy )
{
    *this = copy;
}

Conversion &Conversion::operator=( Conversion const &copy )
{
    this->_character = copy.getChar();
    this->_nbInt = copy.getInt();
    this->_nbFloat = copy.getFloat();
    this->_nbDouble = copy.getDouble();
    return(*this);
}

// GETTEURS 
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

// FCT DE CONVERSION 
void    Conversion::printConversion( void )
{
    if (!this->_isPrintable)
        std::cout << "char: Non displayable "<< std::endl;
    else if (!this->_isValidChar)
        std::cout << "char: impossible "<< std::endl;
    else
        std::cout << "char: " <<  getChar() << std::endl;
    if (!this->_isValidInt)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << getInt() << std::endl;
    if (!this->_isValidFloat)
        std::cout << "float: impossible" << std::endl;
    else
        std::cout << "float: " 	<< std::fixed << std::setprecision(1) << getFloat()	<< "f" 	<< std::endl;
    std::cout << "double : " << std::fixed << std::setprecision(1) << getDouble() << std::endl;
}

void    Conversion::convertInt(std:: string input)
{
    long temp;
    std::istringstream tempStream(input);
    tempStream >> temp; // string to int version +98c++
    if (temp > INT_MAX or temp < INT_MIN)
	    throw Conversion::ConversionExceptionImpossible();
    if (isInvalidInput(input, INT))
        throw ConversionExceptionImpossible();
    this->_nbInt = temp;
    this->_nbFloat = static_cast<float>(this->_nbInt);
    this->_nbDouble = static_cast<double>(this->_nbInt);
    this->_character = static_cast<char>(this->_nbInt);
    if (this->_nbInt < 32 or this->_nbInt > 126)
        this->_isPrintable = false;
    if (this->_character > CHAR_MAX or this->_character < CHAR_MIN)
        this->_isValidChar = false;
}

void    handleInfPos( void)
{
    std::cout << "char : impossible" << std::endl;
    std::cout << "int : impossible" << std::endl;
    std::cout << "float : " << "+inff" << std::endl;
    std::cout << "double : " << "+inf "<< std::endl;
}

void    handleInfNeg( void )
{
    std::cout << "char : impossible " << std::endl;
    std::cout << "int :  impossible " << std::endl;
    std::cout << "float : " << "-inff" << std::endl;
    std::cout << "double : " << "-inf "<< std::endl;
}

void    Conversion::convertDouble(std:: string input)
{
    this->_nbDouble = strtod(input.c_str(), NULL);
    if (this->_nbDouble == HUGE_VAL )
    {
        handleInfPos();
        return;
    }
    if (this->_nbDouble == -HUGE_VAL)
    {
        handleInfNeg();
        return;
    }
    if (isInvalidInput(input, DOUBLE))
        throw ConversionExceptionImpossible();
    this->_nbInt = static_cast<int>(this->_nbDouble);
    if (this->_nbFloat > static_cast<float>(std::numeric_limits<int>::max()) 
        or this->_nbFloat < static_cast<float>(std::numeric_limits<int>::min())) 
        this->_isValidInt = false;
    this->_nbFloat = static_cast<float>(this->_nbDouble);
    if (this->_nbFloat == HUGE_VAL or this->_nbFloat == -HUGE_VAL or this->_nbFloat != this->_nbFloat )
        this->_isValidFloat = false;
    this->_character = static_cast<char>(this->_nbDouble);
    if (this->_character > CHAR_MAX or this->_character < CHAR_MIN)
        this->_isValidChar = false;
    if (this->_nbInt < 32 or this->_nbInt > 126)
        this->_isPrintable = false;
}


void    Conversion::convertFloat(std:: string input)
{
    this->_nbFloat = strtof(input.c_str(), NULL);
    if (this->_nbFloat != this->_nbFloat )
        throw ConversionExceptionImpossible();
    if (this->_nbFloat == HUGE_VAL )
    {
        handleInfPos();
        return;
    }
    if (this->_nbFloat == -HUGE_VAL)
    {
        handleInfNeg();
        return;
    }
    if (isInvalidInput(input, FLOAT))
        throw ConversionExceptionImpossible();
    this->_nbInt = static_cast<int>(this->_nbFloat);
    if (this->_nbFloat > static_cast<float>(std::numeric_limits<int>::max()) 
        or this->_nbFloat < static_cast<float>(std::numeric_limits<int>::min())) 
        this->_isValidInt = false;
    this->_nbDouble = static_cast<double>(this->_nbFloat);
    this->_character = static_cast<char>(this->_nbFloat);
    if (this->_nbInt < 32 or this->_nbInt > 126)
        this->_isPrintable = false;
    if (this->_character > CHAR_MAX or this->_character < CHAR_MIN)
        this->_isValidChar = false;
}

void    Conversion::convertChar(std:: string input)
{
    this->_character = static_cast<char>(input[0]);
    this->_nbInt = static_cast<int>(this->_character);
    this->_nbFloat = static_cast<float>(this->_character);
    this->_nbDouble = static_cast<double>(this->_character);
    if (this->_character > CHAR_MAX or this->_character < CHAR_MIN)
        this->_isValidChar = false;
    if (this->_nbInt < 32 or this->_nbInt > 126)
        this->_isPrintable = false;
}

void    Conversion::convert( std::string input )
{    
    try
    {   
         bool foundPoint = false;

        for (size_t i = 0; i < input.length(); i++)
        {
            if (input[i] == '.')
            {
                if (foundPoint == true)
                    throw ConversionExceptionImpossible();
                foundPoint = true;
            }
        }
        if (input.length() == 1 and not std::isdigit(input[0])) // Get CHAR 
            this->convertChar(input);
        else if (input.find(".") != std::string::npos) // get FLOAT or DOUBLE
        {
            if (input.find("f") != std::string::npos) // get FLOAT
                this->convertFloat(input);
            else
                this->convertDouble(input); // get DOUBLE
        }
        else
            this->convertInt(input); // get INT
    }
    catch(const Conversion::ConversionExceptionImpossible &e)
    {
        std::cout << "char : " << e.what() << std::endl;
        std::cout << "int :  "<< e.what() << '\n';
        std::cout << "float : " << "nanf" << std::endl;
        std::cout << "double : " << "nan "<< std::endl;
        return ;
    }
    this->printConversion();
}