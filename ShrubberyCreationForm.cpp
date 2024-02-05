#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
    :AForm("ShrubberyCreationForm",145,137),target_("default_target"){

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target)
    : AForm("ShrubberyCreationForm",145,137),target_(target){

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
    : AForm(src){
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){

    if(this != &rhs){

        AForm::operator=(rhs);
    }
    return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    
}

const std::string& ShrubberyCreationForm::getTarget()const{

    return target_;
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor)const{
    
    {
        if(!getSigned())
            throw FormNotsignException();
        if(executor.getGrade() > getExe())
            throw GradetooLowException();
    }
    std::ofstream outputFile((target_ + "_shrubbery").c_str());
    if(outputFile.is_open())
    {
        outputFile << "    A\n";
        outputFile << "   / \\ \n";
        outputFile << "  B   B\n";
        outputFile << " / \\ / \\ \n";
        outputFile << "C   C   C\n";
    }
    else
        std::cerr << "Error opening file" << std::endl;
}