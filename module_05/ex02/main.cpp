#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main()
{   
    try
    {  
        Bureaucrat bureaucrat("Helen", 11);
        ShrubberyCreationForm formOne("Helen");
        bureaucrat.signForm(formOne);
        formOne.execute(bureaucrat);
    }
    catch(const std::exception& e)
    {
        std::cerr << "error: " << e.what() << '\n';
    }

}