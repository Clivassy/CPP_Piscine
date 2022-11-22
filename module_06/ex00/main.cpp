#include "Conversion.hpp"
/* ----------------------------------------------------
STEP ONE : get the type of the litteral 
STEP TWO : Convert into his original type
STEP THREE : convert into other type checking it is possible and displayable 
STEP FOUR : Print result 
-------------------------------------------------------*/

void    Conversion::convertInt(std:: string input)
{
    long temp;
    std::istringstream(input) >> temp; // string to in version +98c++
    if (temp > INT_MAX or temp < INT_MIN)
		throw Conversion::ConversionExceptionImpossible();
    this->_nbInt = temp;
    this->_nbFloat = static_cast<float>(this->_nbInt);
    this->_nbDouble = static_cast<double>(this->_nbInt);
    this->_character = static_cast<char>(this->_nbInt);

    // tout ca a inclure dans la fct de print + checker les booléens
    if (this->_nbInt < 32 or this->_nbInt > 126)
		std::cout << "char : non displayable" << std::endl;
    else
        std::cout << "char : " <<  this->_character << std::endl;
    std::cout << "int : " <<  this->_nbInt << std::endl;
    std::cout << "float: " 	<< std::fixed << std::setprecision(1) << getFloat()	<< "f" 	<< std::endl;
    std::cout << "double : " << this->_nbDouble << std::endl;
}

void    Conversion::convertDouble(std:: string input)
{
    this->_nbDouble = strtod(input.c_str(), NULL);
    if (this->_nbDouble == HUGE_VAL or this->_nbDouble == -HUGE_VAL or this->_nbDouble != this->_nbDouble )
        throw ConversionExceptionImpossible();
    this->_nbInt = static_cast<int>(this->_nbFloat);
    if (this->_nbFloat > INT_MAX or this->_nbFloat < INT_MIN)
        this->_isValidInt = false;
    this->_nbFloat = static_cast<float>(this->_nbDouble);
    if (this->_nbFloat == HUGE_VAL or this->_nbFloat == -HUGE_VAL or this->_nbFloat != this->_nbFloat )
        this->_isValidFloat = false;
    this->_character = static_cast<char>(this->_nbDouble);
    if (this->_character > CHAR_MAX or this->_character < CHAR_MIN)
        this->_isValidChar == false;
    //fct de print passant le char en parametre et en fct des bool on affiche correctement.
}


void    Conversion::convertFloat(std:: string input)
{
    this->_nbFloat = strtof(input.c_str(), NULL);
    if (this->_nbFloat == HUGE_VAL or this->_nbFloat == -HUGE_VAL or this->_nbFloat != this->_nbFloat )
        throw ConversionExceptionImpossible();
    this->_nbInt = static_cast<int>(this->_nbFloat);
    if (this->_nbFloat > INT_MAX or this->_nbFloat < INT_MIN)
        this->_isValidInt = false;
    this->_nbDouble = static_cast<double>(this->_nbFloat);
    this->_character = static_cast<char>(this->_nbFloat);
    if (this->_character > CHAR_MAX or this->_character < CHAR_MIN)
        this->_isValidChar == false;
    // fct print du résultat ( passe en parametre le char c )


   /* if (this->_nbInt < 32 or this->_nbInt > 126)
		std::cout << "char : non displayable" << std::endl;
    else
        std::cout << "char : " <<  this->_character << std::endl;
    
        std::cout << "int : impossible " << std::endl;
    else
        std::cout << "int : " <<  this->_nbInt << std::endl;
    std::cout << "float: " 	<< std::fixed << std::setprecision(1) << getFloat()	<< "f" 	<< std::endl;
    std::cout << "double : " << this->_nbDouble << std::endl;*/
}

void    Conversion::convertChar(std:: string input)
{
   // bool validChar = true;

    this->_character = input[0];
    this->_nbInt = static_cast<int>(this->_character);
    this->_nbFloat = static_cast<float>(this->_character);
    this->_nbDouble = static_cast<double>(this->_character);
    //if (this->_character > CHAR_MAX or this->_character < CHAR_MIN)
      //  validChar = false;
    if (!isprint(this->_character))
        std::cout << "char : non displayable" << std::endl;
    else
        std::cout << "char : " <<  this->_character << std::endl;
    std::cout << "int : " <<  this->_nbInt << std::endl;
    std::cout << "float: " 	<< std::fixed << std::setprecision(1) << getFloat()	<< "f" 	<< std::endl;
    std::cout << "double : " << this->_nbDouble << std::endl;
}

void    Conversion::convert( std::string input )
{
    try
    {
        if (input.length() == 1 and not std::isdigit(input[0])) // Get CHAR 
        {
            std::cout << "found char" << std::endl;
            this->convertChar(input);
            return;
        }
        else if (input.find(".") != std::string::npos) // get FLOAT or INT
        {
            if (input.find("f") != std::string::npos) // get FLOAT
            {
                std::cout << "found float"<< std::endl;
                this->convertFloat(input);
            }
            else
            {
                this->convertDouble(input);
                std::cout << "found double "<< std::endl; // get DOUBLE
            }
        }
        else
        {
            std::cout << "found integer" << std::endl;  // get INT
            this->convertInt(input);
        }
    }
    catch(const Conversion::ConversionExceptionImpossible &e)
    {
        std::cout << "char : " << e.what() << std::endl;
        std::cout << "int :  "<< e.what() << '\n';
        std::cout << "float : " << "nanf" << std::endl;
        std::cout << "double : " << "nan "<< std::endl;
    }
}

int main(int ac, char **av)
{
    std::string input;
    if (ac != 2)
    {
        std::cout << RED "Error: input muste be : ./ConversionScalaire [int OR char OR float OR double]" CLEAR << std::endl;
        return(0);
    }
    Conversion convertion;
    convertion.convert(av[1]);
    return(0);
}

/* errors : 
 1 - tout est impossible
 2 - char impossible 
 3- char non diplayable 
 4 -int impossible
 */ 
