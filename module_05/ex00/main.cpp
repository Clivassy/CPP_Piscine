#include "Bureaucrat.hpp"

int main()
{       
    //-------------   Tests with valid _grade -----------------------------
    {
        std::cout << YELLOW "------------------------------" << std::endl;
        std::cout << " Tests with valid grade "  << std::endl;
        std::cout <<  "------------------------------" CLEAR << std::endl;
        try
        {
            Bureaucrat bureaucrat("Elen", 10);
            std::cout << YELLOW "Before operations: " CLEAR << bureaucrat;
            bureaucrat.increment();
            std::cout << YELLOW  "After increment: " CLEAR << bureaucrat;
            bureaucrat.decrement();
            std::cout << YELLOW  "After decrement: " CLEAR << bureaucrat;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    // Test with invalid grade at construction
    {
        std::cout << YELLOW "-----------------------------------------" << std::endl;
        std::cout << " Tests with invalid grade at contruction "  << std::endl;
        std::cout <<  "-----------------------------------------" << CLEAR << std::endl;
        try
        {
            Bureaucrat bureaucrat1("Elen", 0);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
           Bureaucrat bureaucrat2("Tom", 151);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
    //---------- Test with invalid grade following decrement or increment ----------
    {
        std::cout << YELLOW "-----------------------------------------------------" << std::endl;
        std::cout << " Test with invalid grade after decrement or increment "  << std::endl;
        std::cout <<  "-----------------------------------------------------" << CLEAR << std::endl;
        try
        {
            Bureaucrat bureaucrat1("Elen", 150);
            std::cout << YELLOW "Before decrement: " <<  bureaucrat1;
            bureaucrat1.decrement();
            std::cout << bureaucrat1;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            Bureaucrat bureaucrat2("Elen", 1);
            std::cout << YELLOW "Before increment: " << bureaucrat2;
            bureaucrat2.increment();
            std::cout << bureaucrat2;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }

    return (0);
}
