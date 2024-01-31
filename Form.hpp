#ifndef Form_HPP
#define Form_HPP
#include "Bureaucrat.hpp"
#include <iostream>
#include <stdexcept>

class Bureaucrat;

class Form{

    public :
        class GradetooHighException : public std::exception {
            public :
                const char* what() const throw(){
                    return "Either grade and/or gradeexe is < 1";
                }
        };
        class GradetooLowException : public std::exception{
            public:
                const char* what() const throw(){
                    return "Grade's form is > 150 or grade's bureaucrat is too low";
                }
        };
        Form();
        Form(const std::string& name,int grade,int gradeexe);
        Form(Form const & src);
        Form & operator=(Form const & rhs);
        ~Form();

        const std::string& getName(void)const;
        bool getSigned(void) const;
        int getGrade(void)const;
        int getExe(void)const;
        void beSigned(const Bureaucrat & bureaucrat);

    private :

        const std::string name_;
        bool signed_;
        const int grade_;
        const int gradeexe_;
};

std::ostream& operator<<(std::ostream &str, Form const & rhs);

#endif