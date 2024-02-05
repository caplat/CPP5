#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm{

    public :

        RobotomyRequestForm();
        RobotomyRequestForm(const std::string & target);
        RobotomyRequestForm(RobotomyRequestForm const & src);
        RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
        ~RobotomyRequestForm();
        const std::string & getTarget()const;

        void execute(const Bureaucrat &executor)const;

    private :

        const std::string target_;
};

#endif