#include "Bureaucrat.hpp"

int main()
{   
    // Test with invalid grade at construction
    {
        std::cout << YELLOW "-----------------------------------------" << std::endl;
        std::cout << " Tests with invalid grade at contruction "  << std::endl;
        std::cout <<  "-----------------------------------------"CLEAR << std::endl;
        try
        {
            Bureaucrat bureaucrat("Elen", 0);
            //Bureaucrat bureaucrat("Elen", 151);
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
        std::cout <<  "-----------------------------------------------------"CLEAR << std::endl;
        try
        {
            Bureaucrat bureaucrat("Elen", 150);
            std::cout << GREEN "Before decrement: " << bureaucrat;
            bureaucrat.decrement();
           // Bureaucrat bureaucrat("Elen", 1);
          //  std::cout << GREEN "Before increment: " << bureaucrat;
          //  bureaucrat.increment();
            std::cout << bureaucrat;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    //-------------   Tests with valid _grade -----------------------------
    {
        std::cout << YELLOW "------------------------------" << std::endl;
        std::cout << " Tests with valid grade "  << std::endl;
        std::cout <<  "------------------------------"CLEAR << std::endl;
        try
        {
            Bureaucrat bureaucrat("Elen", 10);
            std::cout << YELLOW "Before operations: " << bureaucrat;
            bureaucrat.increment();
            std::cout << YELLOW  "After increment: " << bureaucrat;
            bureaucrat.decrement();
            std::cout << YELLOW  "After decrement: " CLEAR << bureaucrat;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return (0);
}
