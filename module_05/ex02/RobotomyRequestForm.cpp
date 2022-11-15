#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
{
    // mettre en private
}

RobotomyRequestForm::RobotomyRequestForm( std::string target)
{
    // add a target aux attributs privé ainsi qu'un get target
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
    
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &copy )
{

}

RobotomyRequestForm  &RobotomyRequestForm::operator=( RobotomyRequestForm const &copy )
{

}

void    RobotomyRequestForm::execute( const Bureaucrat &executor )const
{
    // fait des bruits de perceuse, puis informe que la target a été robotomisée avec succès 50%du temps 
   // (soit une fois sur deux) dans le cas contraire, informe que l'opération a échouée. 
}

