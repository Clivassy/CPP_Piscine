#include "Span.hpp"

int main(){

    Span tab(3);

    try
    {       
        tab.addNumber(5);
        tab.addNumber(6);
        tab.addNumber(1);
        for (unsigned int i = 0; i < tab.getN() ; i++){
        std::cout << tab.getNumber(i) << std::endl;
        }
        tab.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}