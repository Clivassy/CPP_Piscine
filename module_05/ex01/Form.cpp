#include "Form.hpp"

Form::Form( void ): _name("Default"), _signedGrade(3), _execGrade(4), _signed(false)
{
    std::cout << "Constructor by default called for: " << this->_name << std::endl;
}

Form::Form( std::string name, int signedGrade, int execGrade ): 
_name(name),  _signedGrade(signedGrade), _execGrade(execGrade), _signed(false)
{
    if (this->_signedGrade < 1 or _execGrade < 1)
       throw Form::GradeTooHighException();
    if (this->_signedGrade > 150 or _execGrade > 150)
        throw Form::GradeTooLowException();
    std::cout << "Constructor called for: " << this->_name << std::endl;
}

Form::~Form( void )
{
    std::cout << "Destructor called for: " << this->_name << std::endl;
}

Form::Form( const Form &copy )
{
    *this = copy;
}

Form  &Form::operator=( Form const &copy )
{
    this->_signed = copy.getSignedGrade();
    return (*this);
}

std::string Form::getName( void )const
{
    return (this->_name);
}

int Form::getSignedGrade( void )const
{
    return (this->_signedGrade);
}

int Form::getExecGrade( void )const
{
    return (this->_execGrade);
}

bool Form::getFormStatus( void)const
{
    if (this->_signed == true)
        return(true);
    return(false);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getSignedGrade())
        this->_signed = true;
    else
        throw Form::GradeTooLowException();
}

std::ostream &operator<<( std::ostream &out, Form const &input )
{
    out << "Name : " << input.getName() << std::endl;
    out << "Request Grade to signed: " << input.getSignedGrade() << std::endl;
    out << "Request Grade to execute: " << input.getExecGrade() << std::endl;
    out << "Status of the form: " << input.getFormStatus() << std::endl;
    return(out);
}