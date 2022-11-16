#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("Default", SIGNED_GRADE, EXEC_GRADE)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target) : Form(target, SIGNED_GRADE, EXEC_GRADE)
{
    //
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
    //
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy )
{
    *this = copy;
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator=( ShrubberyCreationForm const &copy )
{
    this->_target = copy.getTarget();
    return(*this);
}

std::string     ShrubberyCreationForm::getTarget( void ) const
{
    return( this->_target);
}

void    ShrubberyCreationForm::execute( const Bureaucrat &executor )const
{
    std::ofstream outfile(this->getTarget() + "_shrubbery");
    try
    {
    //  ecrit des abres ascii
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}

