#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) 
: Form( target, "RobotomyRequestForm", ROBOTOMY_SIGNED_GRADE, ROBOTOMY_EXEC_GRADE)
{
    std::cout << "RobotomyRequestForm constructor called for : " << target << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
    std::cout << "RobotomyRequestForm destructor called for : " << Form::getTarget() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &copy )
{
    std::cout << "RobotomyRequestForm constructor by copy called" << std::endl;
    *this = copy;
}

RobotomyRequestForm  &RobotomyRequestForm::operator=( RobotomyRequestForm const &copy )
{
	Form::operator=( copy );
	return ( *this );
}

void    RobotomyRequestForm::execute( const Bureaucrat &executor )const
{
    if (executor.getGrade() > ROBOTOMY_EXEC_GRADE)
    {
        throw Form::GradeTooLowException();
    }
    // 
    // fait des bruits de perceuse, puis informe que la target a été robotomisée avec succès 50%du temps 
   // (soit une fois sur deux) dans le cas contraire, informe que l'opération a échouée. 
}

