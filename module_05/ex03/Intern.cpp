#include "Intern.hpp"

Intern::Intern( void )
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern( void )
{
    std::cout << "Intern desstructor called" << std::endl;
}

Intern::Intern( const Intern &copy )
{
    *this = copy;
    std::cout << "Intern constructor by copy called" << std::endl;
}

Intern &Intern::operator=( Intern const &copy )
{
    //
}

Form*   Intern::makeForm(std::string FormName, std::string FormTarget)
{
    
    std::cout << "Intern creates" << FormName << std::endl;
}
