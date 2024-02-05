#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{

    public :

        Intern();
        Intern(Intern const & src);
        Intern & operator=(Intern const & rhs);
        ~Intern();

        AForm* makeForm(const std::string formname,const std::string& target);
        AForm *create_shrubbery_form(const std::string& target);
        AForm *create_robotomy_form(const std::string& target);
        AForm *create_presidential_form(const std::string& target);

};

#endif