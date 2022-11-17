#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main()
{   
    try
    {  

        // Creer 3 formulaires des trois types 
        Bureaucrat bureaucrat("Helen", 15);
        ShrubberyCreationForm formOne("New form");
        PresidentialPardonForm Decret("Decret");

        bureaucrat.signForm(formOne);
        bureaucrat.signForm(Decret);

        bureaucrat.executeForm(formOne);

        // Decret.execute(bureaucrat);
        // formOne.execute(bureaucrat);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }

}