#include "Span.hpp"

int main(){

   /* try
    {
        Span test = Span(10);
        std::vector<int>tab;
        for (int i = 0 ; i < 10 ; i++)
		    tab.push_back(i); // je fill le tab 
		test.addNumber(tab.begin(), tab.end()); // je copie toutes les valeurs du tab dans mon tab span
	
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }*/


    {
		Span sp = Span(1000000);
        std::vector<int>tab;
		for (int i = 0 ; i < 1000000 ; i++)
		    tab.push_back(i);

		try
        {
            sp.addNumber(tab.begin(), tab.end());
		    std::cout << sp.shortestSpan() << std::endl;
		    std::cout << sp.longestSpan() << std::endl;
            sp.addNumber(5);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
         

	}
   /* Span tab(3);
    try
    {       
        tab.addNumber(5);
        tab.addNumber(6);
        tab.addNumber(1);

        for (unsigned int i = 0; i < tab.getN() ; i++){
        std::cout << tab.getNumber(i) << std::endl;
        }
        std::cout << tab.shortestSpan() << std::endl;
        std::cout << tab.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
*/
}