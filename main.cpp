#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat b;
    Bureaucrat a("PDG",1);
    PresidentialPardonForm c;

    std::cout << b << std::endl;
    std::cout << c << std::endl;

    b.executeForm(c);

    std::cout << c << std::endl;
    a.SignForm(c);
    std::cout << c << std::endl;
    b.executeForm(c);
    a.executeForm(c);
}