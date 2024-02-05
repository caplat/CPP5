#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
    :AForm("PresidentialPardonForm",25,5),target_("default_target"){

}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target)
    : AForm("PresidentialPardonForm",25,5),target_(target){

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
    : AForm(src){

}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs){

    if(this != &rhs){

        AForm::operator=(rhs);
    }
    return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){
    
}

const std::string& PresidentialPardonForm::getTarget()const{

    return target_;
}

void PresidentialPardonForm::execute(const Bureaucrat & executor)const{
    
    {
        if(!getSigned())
            throw FormNotsignException();
        if(executor.getGrade() > getExe())
            throw GradetooLowException();
    }
    std::cout << target_ << " has been pardoned by Zaphod Beeblebrox " << std::endl; 
}

