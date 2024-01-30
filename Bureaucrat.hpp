#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>

class Bureaucrat{

    public :
        class GradetooHighException : public std::exception {
            public:
                const char* what() const throw(){
                    return "Grade is < 1";
                }
        };
        class GradetooLowException : public std::exception {
        public:
            const char* what() const throw(){
                return "Grade is > 150";
            }
        };
        Bureaucrat();
        Bureaucrat(const std::string& name,int grade);
        Bureaucrat(Bureaucrat const & src);
        Bureaucrat & operator=(Bureaucrat const & rhs);
        ~Bureaucrat();
        

        const std::string& getName(void)const;
        int getGrade(void) const;


    private :

        const std::string name_;
        int grade_;

};

std::ostream& operator<<(std::ostream &str, Bureaucrat const & rhs);

#endif