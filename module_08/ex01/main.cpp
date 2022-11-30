#include "Span.hpp"

int main(){

    std::cout << YELLOW "-----------------------------" CLEAR<< std::endl;
    std::cout << " CLASSIC FUNTIONAL TEST " << std::endl;
    std::cout << YELLOW "-----------------------------" CLEAR<< std::endl;
    try
    {
        Span test = Span(10);
        std::vector<int>tab;
        for (int i = 0 ; i < 5 ; i++)
		    tab.push_back(i);
		test.addNumber(tab.begin(), tab.end());
	
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << YELLOW "-----------------------------" CLEAR<< std::endl;
    std::cout << "TEST WITH BIG HUGE NUMBER " << std::endl;
    std::cout << YELLOW "-----------------------------" CLEAR<< std::endl;
    // TESTS Big HUGE number 
    {
        std::vector<int>tab;
		Span bigTest = Span(1000000);
		for (int i = 0 ; i < 1000000 ; i++)
		    tab.push_back(i);
        bigTest.addNumber(tab.begin(), tab.end());
	    std::cout << bigTest.shortestSpan() << std::endl;
	    std::cout << bigTest.longestSpan() << std::endl;        
    }

    std::cout << YELLOW "-----------------------------" CLEAR<< std::endl;
    std::cout << "TEST WITH NEGATIVE NUMBER " << std::endl;
    std::cout << YELLOW "-----------------------------" CLEAR<< std::endl;
    {
        Span tab(3);
        tab.addNumber(-10);
        tab.addNumber(7);
        tab.addNumber(1);

        std::cout << tab.shortestSpan() << std::endl;
        std::cout << tab.longestSpan() << std::endl;      
    }

    std::cout << YELLOW "-----------------------------" CLEAR<< std::endl;
    std::cout << "TEST WITH NOT ENOUGH NB TO PERFORM SPAN CALCUL " << std::endl;
    std::cout << YELLOW "-----------------------------" CLEAR<< std::endl;
    {
        Span tab(7);
        try
        {       
            tab.addNumber(-10);

            std::cout << tab.shortestSpan() << std::endl;
            std::cout << tab.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    std::cout << YELLOW "-----------------------------" CLEAR<< std::endl;
    std::cout << "TESTING FULL ARRAY EXCEPTION " << std::endl;
    std::cout << YELLOW "-----------------------------" CLEAR<< std::endl;
    Span tab(3);
    try
    {       
        tab.addNumber(-10);
        tab.addNumber(7);
        tab.addNumber(1);
        tab.addNumber(10);

        std::cout << tab.shortestSpan() << std::endl;
        std::cout << tab.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}