#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{   
    try
    {
        Bureaucrat bureaucrat("Helen", 11);
        std::cout << bureaucrat;
        Form form("CV", 10, 2);
        bureaucrat.signForm(form);
        std:: cout << form;
    }
    catch(const std::exception& e)
    {
        std::cerr << "error: " << e.what() << '\n';
    }

}