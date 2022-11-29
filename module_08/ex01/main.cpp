#include "Span.hpp"

int main(){

   // CLASSSIC TEST 
    try
    {
        Span test = Span(10);
        std::vector<int>tab;
        for (int i = 0 ; i < 5 ; i++)
		    tab.push_back(i); // je fill le tab 
		test.addNumber(tab.begin(), tab.end()); // je copie toutes les valeurs du tab dans mon tab span
	
		//std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // TESTS Big HUGE number 
    {
        std::vector<int>tab;
		Span bigTest = Span(1000000);
		for (int i = 0 ; i < 1000000 ; i++)
		    tab.push_back(i);
        bigTest.addNumber(tab.begin(), tab.end());
	   // std::cout << bigTest.shortestSpan() << std::endl;
	    std::cout << bigTest.longestSpan() << std::endl;        
    }


    // TESTING EXCEPTIONS 
    Span tab(3);
    try
    {       
        tab.addNumber(5);
        tab.addNumber(6);
        tab.addNumber(1);
        tab.addNumber(10);

      //  std::cout << tab.shortestSpan() << std::endl;
        std::cout << tab.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}