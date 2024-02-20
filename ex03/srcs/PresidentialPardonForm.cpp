# include <string>
# include <iostream>
# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardonForm" , 25, 5) , _target("NO NAME"){
	std::cout << "Default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: Form("PresidentialPardonForm", 25, 5), _target(target){
	std::cout << "PresidentialPardonForm constructor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Destructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a) 
	: Form(a.getName(), a.getGradeToSign(), a.getGradeToExecute()) {
	std::cout << "Copy constructor called\n";
	_isSigned =  a.getIsSigned();
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &a) {
	_gradeToSign = a.getGradeToSign();
	_gradeToExecute = a.getGradeToExecute();
	_isSigned = a.getIsSigned();
	return (*this);
}

void PresidentialPardonForm :: executeAction() const{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
}

