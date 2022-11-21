#include "Conversion.hpp"


/*
int main()
{
class polygone
{
    public :
    virtual void f() {}
};

class carre : public polygone {};

int main()
{
    carre monCarre;
    carre& r_carre = monCarre;

    try {
        polygone& r_polygone = dynamic_cast<polygone&>(r_carre);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what();
    }
    return EXIT_SUCCESS;
}
}
*/
void    convertChar(std:: string input)
{
    // remplacer toutes les variables : int float char par les attributs de la classe
    // temp pour tester 
    /* STEPS :
    -  convertir l'input en char
    -  convertir l'input en int;
    -  convertir l'input en float
    -  convertir l'input en double
    */
   //std::cout << "str : " << input << std::endl;
    float nbFloat; // tmp
    double nbDouble; // tmp
    char c; // tmp
    int number = 0; // tmp 


// d'abord il faut convertir en char 
    c = input[0];
    number = static_cast<int>(c);
    std::cout << "char : " <<  c << std::endl;
    std::cout << "int : " << number << std::endl;
  /*  if (!isprint(number))
        std::cout << "char : " <<  c << std::endl;
    else
        std::cout << "char : non printable" <<  c << std::endl;
        // throw conversion exception en cas de non printable charatere
    */
    nbFloat = static_cast<float>(c);
    nbDouble = static_cast<double>(c);
    std::cout << "float : " << nbFloat << std::endl;
    std::cout << "double : " << nbDouble << std::endl;
}

int main(int ac, char **av)
{
    std::string input;
    if (ac != 2)
    {
        std::cout << "Error: input muste be : " << std::endl;
        return(0);
    }
    
    /* STEP ONE : GET THE LITTERAL TYPE : int, float, double, char */

    input = av[1];

    if (input.length() == 1 and not std::isdigit(input[0])) // Get CHAR 
    {
        std::cout << "found char" << std::endl;
        convertChar(input);
    }
    else if (input.find(".") != std::string::npos) // get FLOAT or INT
    {
        if (input.find("f") != std::string::npos) // get FLOAT
            std::cout << "found float"<< std::endl;
        else
            std::cout << "found double "<< std::endl; // get DOUBLE
    }
    else
        std::cout << "found integer" << std::endl;  // get INT

    /* STEP TWO : Convertir le type dans les autres type et afficher son type en:

    - char : 
    - int :
    - float :
    - double :

    */
    return(0);
}


// fair un check si la conversion d'un char est affichable ou non 
