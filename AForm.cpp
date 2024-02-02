#include "AForm.hpp"

AForm::AForm() : name_("default_form"),signed_(0),grade_(150),gradeexe_(150){

}

AForm::AForm(const std::string& name,int grade,int gradeexe):name_(name),signed_(0),grade_(grade),gradeexe_(gradeexe){

    if(grade < 1 || gradeexe < 1)
        throw GradetooHighException();
    else if(grade > 150 || gradeexe > 150)
        throw GradetooLowException();
}

AForm::AForm(AForm const & src): name_(src.name_),signed_(src.signed_),grade_(src.grade_),gradeexe_(src.gradeexe_){

}

AForm & AForm::operator=(AForm const & rhs){

    this->signed_ = rhs.getSigned();
    return(*this);
}

AForm::~AForm(){

}

const std::string& AForm::getName()const{

    return name_;
}

int AForm::getGrade()const{

    return grade_;
}

int AForm::getExe()const{

    return gradeexe_;
}

bool AForm::getSigned()const{

    return signed_;
}

void AForm::beSigned(const Bureaucrat & bureaucrat){

    if(bureaucrat.getGrade() <= grade_)
        signed_ = 1;
    else
        throw GradetooLowException();
}

std::ostream& operator<<(std::ostream &str, AForm const & rhs){

    str << rhs.getName() << " need a bureaucrat of grade at least " 
    << rhs.getGrade() << " to be signed and graded "  << rhs.getExe() 
    << " to be executed, currently the state of the document is " << rhs.getSigned();
    return(str);
}