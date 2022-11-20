#include "RobotomyRequestForm.hpp"
#include <stdio.h>
#include <stdlib.h> 
RobotomyRequestForm::RobotomyRequestForm( std::string target ) 
: Form( target, "RobotomyRequestForm", ROBOTOMY_SIGNED_GRADE, ROBOTOMY_EXEC_GRADE)
{
    std::cout << "RobotomyRequestForm constructor called for : " << target << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
    std::cout << "RobotomyRequestForm destructor called for : " << Form::getTarget() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &copy ): Form( copy)
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
    if (this->Form::getFormStatus() == false)
    {
		throw Form::UnsignedForm();
	}
    if (executor.getGrade() > ROBOTOMY_EXEC_GRADE)
    {
        throw Form::GradeTooLowException();
    }
    if (rand() % 2 == 1)
        std::cout << "Brrrrr brrrrr.. " << Form::getTarget() << " has been robotomised!" << std::endl;
    else
        std::cout << "Brrrrr brrrr... Robotomisation of " << Form::getTarget() << " failed" << std::endl;
}

