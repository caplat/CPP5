#include "Intern.hpp"

Intern::Intern(){

}

Intern::Intern(Intern const & src){

    (void)src;
}

Intern & Intern::operator=(Intern const & rhs){

    (void)rhs;
    return(*this);
}

Intern::~Intern(){

}

AForm* Intern::create_shrubbery_form(const std::string& target){

    return new ShrubberyCreationForm(target);
}

AForm* Intern::create_robotomy_form(const std::string& target){

    return new RobotomyRequestForm(target);
}

AForm* Intern::create_presidential_form(const std::string& target){

    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string formname,const std::string& target){

    AForm *(Intern::*f[3])(const std::string&) = {
        &Intern::create_shrubbery_form, 
        &Intern::create_robotomy_form,
        &Intern::create_presidential_form
    };
    std::string form[3] = {"ShrubberyCreationForm","RobotomyRequestForm","PresidentialPardonForm"};
    for(int i = 0;i < 3; i++)
    {
        if(form[i] == formname)
        {
            std::cout << "Intern creates " << formname << std::endl;
            return(this->*f[i])(target);
        }
    }
    std::cerr << formname << " n est pas un formulaire valide." << std::endl;
    return NULL;
}
