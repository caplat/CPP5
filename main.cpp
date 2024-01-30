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
    try
    {
        Bureaucrat b3("Bob",160);
         std::cout << b3 << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << "Cause : " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b4("PDG",0);
        std::cout << b4 << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << "Cause : " << e.what() << std::endl;
    }
}