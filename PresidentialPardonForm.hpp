#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <stdexcept>

class PresidentialPardonForm : public AForm{

    public :

        PresidentialPardonForm();
        PresidentialPardonForm(const std::string & target);
        PresidentialPardonForm(PresidentialPardonForm const & src);
        PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
        ~PresidentialPardonForm();
        const std::string & getTarget()const;

        void execute(const Bureaucrat &executor)const;

    private :

        const std::string target_;
};

#endif