#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("Default"), _grade(1)
{
    std::cout << "Bureaucrat constructor by default called for: " << this->_name << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ): _name(name), _grade(grade)
{
    if (this->_grade < 1)
       throw Bureaucrat::GradeTooHighException();
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Bureaucrat constructor called for: " << this->_name << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
    std::cout << "Bureaucrat destructor called for: " << this->_name << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &copy )
{
    std::cout << "Bureaucrat construtor by copy called for: " << this->_name << std::endl;
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

void    Bureaucrat::signForm( Form &formulaire)
{
    try
    {
        formulaire.beSigned( *this );
    }
    catch(const std::exception& e)
    {
        std::cerr <<  this->getName() << " cannot sign " << formulaire.getName() << " : " << e.what() << '\n';
        throw;
    }
    std::cout << this->getName() << " signs " << formulaire.getName() << std::endl;
}

void    Bureaucrat::executeForm(Form const &Form)
{
    try
    {
        Form.execute(*this);
        std::cout << this->getName() << " executed " << Form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Bureaucrat can't execute form because " << e.what() << '\n';
    }
}

std::ostream &operator<<( std::ostream &out, Bureaucrat const &input )
{
    out << YELLOW << "---------------------------------------" << CLEAR << std::endl;
    out << GREEN << " Bureaucrat informations "<< CLEAR << std::endl;
    out << YELLOW << "---------------------------------------" << CLEAR << std::endl;
    out << "Name : " << input.getName() << std::endl;
    out << "Grade: " << input.getGrade() << std::endl;
    return(out);
}