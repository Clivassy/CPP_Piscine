#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{ 
    {
        std::cout << MAGENTA<< "-----------------------------------------" << std::endl;
        std::cout << MAGENTA " TESTS WITH VALID GRADE " << CLEAR << std::endl;
        std::cout << MAGENTA<< "-----------------------------------------" << CLEAR << std::endl;
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
    {
        std::cout << MAGENTA<< "-----------------------------------------" << std::endl;
        std::cout << MAGENTA <<  " TESTS WITH INVALID GRADE " << CLEAR << std::endl;
        std::cout << MAGENTA << "-----------------------------------------" << CLEAR << std::endl;

        Bureaucrat bureaucrat("Helen", 11);
        Form form("CV", 10, 2);

        std::cout << bureaucrat;
        std:: cout << form;

        bureaucrat.signForm(form);
        std:: cout << form;
    }
}