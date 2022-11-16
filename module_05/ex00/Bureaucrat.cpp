#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("Default"), _grade(1)
{
    std::cout << "Constructor by default called for: " << this->_name << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ): _name(name), _grade(grade)
{
    if (this->_grade < 1)
       throw Bureaucrat::GradeTooHighException();
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Constructor called for: " << this->_name << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
    std::cout << "Destructor called for: " << this->_name << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &copy )
{
    *this = copy;
}

Bureaucrat  &Bureaucrat::operator=( Bureaucrat const &copy )
{
    this->_name = copy.getName();
    this->_grade = copy.getGrade();
    return (*this);
}

std::string Bureaucrat::getName( void )const
{
    return (this->_name);
}

int Bureaucrat::getGrade( void )const
{
    return (this->_grade);
}

void    Bureaucrat::setName( std::string name )
{
    this->_name = name;
    return;
}

void    Bureaucrat::setGrade( int grade )
{
    this->_grade = grade;
    return;
}

void    Bureaucrat::increment( void )
{
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void    Bureaucrat::decrement( void )
{
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

std::ostream &operator<<( std::ostream &out, Bureaucrat const &input )
{
    out <<  GREEN << input.getName() << ", bureaucrat | Grade: " << input.getGrade() << CLEAR << std::endl;
    return(out);
}