#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{   
    // Test with wrong grade 
        std::cout << YELLOW << "-----------------------------------------" << std::endl;
        std::cout << " Test with invalid grade " << std::endl;
        std::cout << "-----------------------------------------" << CLEAR << std::endl;
    {
    try
    {
        Bureaucrat bureaucrat("Helen", 11);
        Form form("CV", 10, 2);

        std::cout << bureaucrat;
        std:: cout << form;

        bureaucrat.signForm(form);
        std:: cout << form;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }
    }
    // Test with valid grade 
    {
        std::cout << YELLOW << "-----------------------------------------" << std::endl;
        std::cout << " Test with vaid grade " << std::endl;
        std::cout << "-----------------------------------------" << CLEAR << std::endl;
    try
    {
        Bureaucrat bureaucrat("Helen", 10);
        Form form("CV", 10, 2);

        std::cout << bureaucrat;
        std:: cout << form;

        bureaucrat.signForm(form);
        std:: cout << form;
        
        bureaucrat.decrement();
        bureaucrat.signForm(form);
        std:: cout << form;

    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }
    }

}