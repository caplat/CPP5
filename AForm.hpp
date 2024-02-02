#ifndef AForm_HPP
#define AForm_HPP
#include "Bureaucrat.hpp"

#include <iostream>
#include <stdexcept>

class Bureaucrat;

class AForm{

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
        class FormNotsignException : public std::exception{
            public :
                const char* what() const throw(){
                    return "Form is not signed";
                }
        };
        AForm();
        AForm(const std::string& name,int grade,int gradeexe);
        AForm(AForm const & src);
        AForm & operator=(AForm const & rhs);
        virtual ~AForm();

        const std::string& getName(void)const;
        bool getSigned(void) const;
        int getGrade(void)const;
        int getExe(void)const;
        void beSigned(const Bureaucrat & bureaucrat);

        virtual void execute(Bureaucrat const & executor) const = 0;

    private :

        const std::string name_;
        bool signed_;
        const int grade_;
        const int gradeexe_;
};

std::ostream& operator<<(std::ostream &str, AForm const & rhs);

#endif