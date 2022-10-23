#include <iostream>
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"

int main()
{
    std:: string str("HI THIS IS BRAIN");
    std:: string *stringPTR = &str; // pointeur sur la string
    std:: string &stringREF = str; // référence sur la string str

    std::cout << YELLOW << "Adresse de str en mémoire : " CLEAR << &str << std::endl;
    std::cout << YELLOW << "Adresse stockée dans stringPTR : " CLEAR  <<stringPTR << std::endl;
    std::cout << YELLOW << "Adresse stockée dans stringREF : " CLEAR << &stringREF << std::endl;
    std::cout << YELLOW << "Valeur de str : " CLEAR << str << std::endl;
    std::cout << YELLOW << "Valeur pointée par stringPTR: " CLEAR << *stringPTR << std::endl;
    std::cout << YELLOW << "Valeur pointée par stringREF: " CLEAR << stringREF << std::endl;
}