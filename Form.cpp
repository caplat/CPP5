#include "Form.hpp"

Form::Form() : name_("default_form"),signed_(0),grade_(150),gradeexe_(150){

}

Form::Form(const std::string& name,int grade,int gradeexe):name_(name),signed_(0),grade_(grade),gradeexe_(gradeexe){

    if(grade < 1 || gradeexe < 1)
        throw GradetooHighException();
    else if(grade > 150 || gradeexe > 150)
        throw GradetooLowException();
}

Form::Form(Form const & src): name_(src.name_),signed_(src.signed_),grade_(src.grade_),gradeexe_(src.gradeexe_){

}

Form & Form::operator=(Form const & rhs){

    this->signed_ = rhs.getSigned();
    return(*this);
}

Form::~Form(){

}

const std::string& Form::getName()const{

    return name_;
}

int Form::getGrade()const{

    return grade_;
}

int Form::getExe()const{

    return gradeexe_;
}

bool Form::getSigned()const{

    return signed_;
}

void Form::beSigned(const Bureaucrat & bureaucrat){

    if(bureaucrat.getGrade() <= grade_)
        signed_ = 1;
    else
        throw GradetooLowException();
}

std::ostream& operator<<(std::ostream &str, Form const & rhs){

    str << rhs.getName() << " need a bureaucrat of grade at least " 
    << rhs.getGrade() << " to be signed and graded "  << rhs.getExe() 
    << " to be executed, currently the state of the document is " << rhs.getSigned();
    return(str);
}