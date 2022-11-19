#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
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

Bureaucrat::Bureaucrat( const Bureaucrat &copy ) : _name(copy.getName())
{
    std::cout << "Bureaucrat construtor by copy called for: " << this->_name << std::endl;
    *this = copy;
}

Bureaucrat  &Bureaucrat::operator=( Bureaucrat const &copy )
{
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
    out << GREEN << input.getName() << " , bureaucrat grade: " << input.getGrade() << CLEAR << std::endl;
    return(out);
}