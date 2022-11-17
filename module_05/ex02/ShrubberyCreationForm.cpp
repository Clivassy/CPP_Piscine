#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) 
: Form(target, "ShrubberyCreationForm", SHRUBBERY_SIGNED_GRADE, SHRUBBERY_EXEC_GRADE)
{
    std::cout << "ShrubberyCreationForm constructor called for : " << target << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
    std::cout << "ShrubberyCreationForm destructor called for : " << Form::getTarget() << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy ) : Form(copy)
{
	std::cout << "ShrubberyCreationForm constructor by copy called" << std::endl;
    *this = copy;
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator=( ShrubberyCreationForm const &copy )
{
	Form::operator=( copy );
	return ( *this );
}

void    ShrubberyCreationForm::execute( const Bureaucrat &executor )const
{
    if (this->Form::getFormStatus() == false){

		throw Form::UnsignedForm();
	}
	if (executor.getGrade() > SHRUBBERY_EXEC_GRADE)
	{

		throw Form::GradeTooLowException();
	}
	std::string outfile = Form::getTarget() + "_shrubbery";
	std::ofstream tree(outfile.c_str());

    tree <<"        *                    " << std::endl;
	tree <<"       ***                   " << std::endl;
	tree <<"      *****                  " << std::endl;
	tree <<"     *******                 " << std::endl;
	tree <<"    *********                " << std::endl;
	tree <<"   ***********               " << std::endl;
	tree <<"  *************              " << std::endl;
	tree <<" ****************            " << std::endl;
	tree <<"******************           " << std::endl;
	tree <<"       |||                   " << std::endl;
	tree <<"       |||                   " << std::endl;
	tree <<"       |||                   " << std::endl;
	tree <<"       |||                   " << std::endl;
	tree <<"+++++++++++++++++++++++++++++" << std::endl;

    tree << "                          " << std::endl;
	tree << "         ####             " << std::endl;
	tree << "       #######            " << std::endl;
	tree << "     ###########          " << std::endl;
	tree << "    #############         " << std::endl;
	tree << "   ##############         " << std::endl;
	tree << "   #############          " << std::endl;
	tree << "   #############          " << std::endl;
	tree << "    ##########            " << std::endl;
	tree << "       |||                " << std::endl;
	tree << "       |||                " << std::endl;
	tree << "       |||                " << std::endl;
	tree << "       |||                " << std::endl;
	tree << "++++++++++++++++++++++++++" << std::endl;
}

