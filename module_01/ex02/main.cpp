#include <iostream>
#define CLEAR "\e[0m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[33m"

int main()
{
    std:: string str("HI THIS IS BRAIN");
    std:: string *stringPTR = &str; // pointeur sur la string
    std:: string &stringREF = str; // référence sur la string str

    std::cout << GREEN << "Adresse de str en mémoire : " CLEAR << &str << std::endl;
    std::cout << GREEN << "Adresse stockée dans stringPTR : " CLEAR  <<stringPTR << std::endl;
    std::cout << GREEN << "Adresse stockée dans stringREF : " CLEAR << &stringREF << std::endl;
    std::cout << GREEN << "Valeur de str : " CLEAR << str << std::endl;
    std::cout << GREEN << "Valeur pointée par stringPTR: " CLEAR << *stringPTR << std::endl;
    std::cout << GREEN << "Valeur pointée par stringREF: " CLEAR << stringREF << std::endl;
}