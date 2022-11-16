#ifndef ROBOTOMY_REQUEST_FORM_H
#define ROBOTOMY_REQUEST_FORM_H

#define SIGNED_GRADE 72
#define EXEC_GRADE 45
//------ librairies------------
#include "Form.hpp"

class RobotomyRequestForm : public Form {

    public:
        RobotomyRequestForm( void );
        RobotomyRequestForm( std::string target );
        ~RobotomyRequestForm( void );
        RobotomyRequestForm( const RobotomyRequestForm &copy );
        RobotomyRequestForm &operator=( RobotomyRequestForm const &copy );

        void    execute( const Bureaucrat &executor ) const;

};  
std::ostream &operator<<( std::ostream &out, Form const &input );
#endif