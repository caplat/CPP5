#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b1;
        Bureaucrat b2("John",65);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << "Cause : " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat b3("Bob",160);
         std::cout << b3 << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << "Cause : " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat b4("PDG",0);
        std::cout << b4 << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << "Cause : " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Form a;
        Form b("formulaire",50,100);

        std::cout << a << std::endl;
        std::cout << b << std::endl;
    }
     catch(const std::exception& e){
        std::cerr << "Cause : " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Form b("B2",-5,59);
    }
        catch(const std::exception& e){
        std::cerr << "Cause : " << e.what() << std::endl;
    }
   std::cout << std::endl;
    {
        Bureaucrat b2("John",65);
        Form a("b28",100,40);
        std::cout << a << std::endl;
        b2.SignForm(a);
        std::cout << a << std::endl;
    }
    std::cout << std::endl;
    {
        Bureaucrat b2("John",120);
        Form a("b28",100,40);
        std::cout << a << std::endl;
        b2.SignForm(a);
        std::cout << a << std::endl;
    }
}