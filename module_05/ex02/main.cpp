#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main()
{   
    try
    {  
        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        std::cout << GREEN << " Bureaucrat Creation "<< CLEAR << std::endl;
        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        Bureaucrat Helen("Helen", 1);
        Bureaucrat Tom("Tom", 70);
        Bureaucrat Mathis("Mathis", 4);
        
        std::cout << Helen;
        std::cout << Tom;
        std::cout << Mathis;
        // Creer 3 formulaires des trois types 
        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        std::cout << GREEN << " Forms Creation "<< CLEAR << std::endl;
        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        ShrubberyCreationForm ShcrubberyAgreement("ShcrubberyAgreement");
        PresidentialPardonForm PresidentialAgreement("PresidentialAgreement");
        RobotomyRequestForm RobotomyAgreement("RobotomyAgreement");

        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        std::cout << GREEN << " Forms signature "<< CLEAR << std::endl;
        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;

        Helen.signForm(ShcrubberyAgreement);
        Helen.signForm(PresidentialAgreement);
        Helen.signForm(RobotomyAgreement);

        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        std::cout << GREEN << " Forms execution "<< CLEAR << std::endl;
        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;

        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        std::cout << CYAN  << " SCHRUBBERY EXECUTION "<< CLEAR << std::endl;
        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        Helen.executeForm(ShcrubberyAgreement);

        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        std::cout << CYAN << " PRESIDENTIAL EXECUTION "<< CLEAR << std::endl;
        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        Helen.executeForm(PresidentialAgreement);

        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        std::cout << CYAN << " ROBOTIMISATION EXECUTION "<< CLEAR << std::endl;
        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        Helen.executeForm(RobotomyAgreement);
        Helen.executeForm(RobotomyAgreement);

        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        std::cout << GREEN << " Objects Destruction "<< CLEAR << std::endl;
        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }

}