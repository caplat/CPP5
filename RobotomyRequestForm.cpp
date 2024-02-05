#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
    :AForm("RobotomyRequestForm",72,45),target_("default_target"){

}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target)
    : AForm("RobotomyRequestForm",72,45),target_(target){

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
    : AForm(src){

}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs){

    if(this != &rhs){

        AForm::operator=(rhs);
    }
    return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){
    
}

const std::string& RobotomyRequestForm::getTarget()const{

    return target_;
}

void RobotomyRequestForm::execute(const Bureaucrat & executor)const{
    
    {
        if(!getSigned())
            throw FormNotsignException();
        if(executor.getGrade() > getExe())
            throw GradetooLowException();
    }
    std::srand(std::time(0));
    int random_value = std::rand();
    bool condition = random_value < RAND_MAX / 2;
    std::cout << "*LOUD DRILLING NOISES*" << std::endl;
    if(condition)
        std::cout << target_ << " has been robotomized successfully" << std::endl;
    else
        std::cout << target_ << "'s robotomy has failed" << std::endl;

}