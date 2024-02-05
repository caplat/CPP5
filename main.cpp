#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern larbin;
    AForm* form;
    AForm* inconnu;

    form = larbin.makeForm("ShrubberyCreationForm","Terminator");
    std::cout << *form << std::endl;

    inconnu = larbin.makeForm("form_inconnu","inconnu");

    if(form != NULL)
        delete form;
    if(inconnu != NULL)
        delete inconnu;
}