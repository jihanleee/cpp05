# include <string>
# include <iostream>
# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardonForm" , 25, 5) , _target("NO NAME"){
	std::cout << "Default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: AForm("PresidentialPardonForm", 25, 5), _target(target){
	std::cout << "PresidentialPardonForm constructor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Destructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a) 
	: AForm(a.getName(), a.getGradeToSign(), a.getGradeToExecute()) {
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

/*seems like increment and decrement functions are not needed*/
/* void PresidentialPardonForm::incrementGrade(){
	if (_grade < 150)
		_grade++;
	else
		throw GradeTooHighException();
}

void PresidentialPardonForm::decrementGrade(){
	if (_grade > 1)
		_grade--;
	else
		throw GradeTooLowException();
}
 */
