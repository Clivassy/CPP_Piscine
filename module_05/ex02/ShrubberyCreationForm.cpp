#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) 
: Form(target, "ShrubberyCreationForm", SHRUBBERY_SIGNED_GRADE, SHRUBBERY_EXEC_GRADE)
{
    //
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
    //
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy ) : Form(copy)
{
    *this = copy;
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator=( ShrubberyCreationForm const &copy )
{
	Form::operator=( copy );
	return ( *this );
}

void    ShrubberyCreationForm::execute( const Bureaucrat &executor )const
{

	std::cout << "Excution of schruberry Form " << std::endl;
    //std::ofstream outfile(this->getTarget() + "_shrubbery");
    if (this->Form::getFormStatus() == false){

		throw Form::UnsignedForm();
	}
	if (executor.getGrade() > this->Form::getExecGrade()){

		throw Form::GradeTooHighException();
	}
	std::string outfile = "_shrubbery"; // targetname before
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

