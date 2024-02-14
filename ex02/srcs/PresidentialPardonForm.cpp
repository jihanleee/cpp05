# include <string>
# include <iostream>
# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("NO NAME" , 10, 10) {
	std::cout << "Default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &name, int gradeToSign, int gradeToExecute)
	: AForm(name, gradeToSign, gradeToExecute){
	std::cout << "PresidentialPardonForm constructor called\n";
	if (gradeToSign < 1)
		throw GradeTooLowException();
	else if (gradeToSign > 150)
		throw GradeTooHighException();
	if (gradeToExecute < 1)
		throw GradeTooLowException();
	else if (gradeToExecute > 150)
		throw GradeTooHighException();
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

void PresidentialPardonForm :: executeAction(){
	std::cout << "meow\n";
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