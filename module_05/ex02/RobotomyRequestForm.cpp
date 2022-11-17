#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) 
: Form( target, "RobotomyRequestForm", ROBOTOMY_SIGNED_GRADE, ROBOTOMY_EXEC_GRADE)
{
    //
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
    
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &copy )
{
    *this = copy;
}

RobotomyRequestForm  &RobotomyRequestForm::operator=( RobotomyRequestForm const &copy )
{
	Form::operator=( copy );
	return ( *this );
}

void    RobotomyRequestForm::execute( const Bureaucrat &executor )const
{

    (void)executor;
    // fait des bruits de perceuse, puis informe que la target a été robotomisée avec succès 50%du temps 
   // (soit une fois sur deux) dans le cas contraire, informe que l'opération a échouée. 
}

