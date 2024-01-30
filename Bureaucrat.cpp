#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name_("default_name"),grade_(150){

}

Bureaucrat::Bureaucrat(const std::string& name,int grade): name_(name){

    if(grade < 1)
        throw GradetooHighException();
    else if(grade > 150)
        throw GradetooLowException();
    else
        grade_ = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): name_(src.name_),grade_(src.grade_){

}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs){

    this->grade_ = rhs.getGrade();
    return(*this);
}

Bureaucrat::~Bureaucrat(){

}

const std::string& Bureaucrat::getName()const{

    return name_;
}

int Bureaucrat::getGrade()const{

    return grade_;
}

std::ostream& operator<<(std::ostream &str, Bureaucrat const & rhs){

    str << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return(str);
}