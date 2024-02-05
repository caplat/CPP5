#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public AForm{

    public :

        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string & target);
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);
        ~ShrubberyCreationForm();
        const std::string & getTarget()const;

        void execute(const Bureaucrat &executor)const;

    private :

        const std::string target_;
};

#endif