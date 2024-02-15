# include <string>
# include <iostream>
# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("NO NAME" , 72, 45) {
	std::cout << "Default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &name)
	: AForm(name, 72, 45) {
	std::cout << "RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Destructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a) 
	: AForm(a.getName(), a.getGradeToSign(), a.getGradeToExecute()) {
	std::cout << "Copy constructor called\n";
	_isSigned =  a.getIsSigned();
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &a) {
	_gradeToSign = a.getGradeToSign();
	_gradeToExecute = a.getGradeToExecute();
	_isSigned = a.getIsSigned();
	return (*this);
}

void RobotomyRequestForm :: executeAction() const{
	std::cout << "meow\n";
}

/*seems like increment and decrement functions are not needed*/
/* void RobotomyRequestForm::incrementGrade(){
	if (_grade < 150)
		_grade++;
	else
		throw GradeTooHighException();
}

void RobotomyRequestForm::decrementGrade(){
	if (_grade > 1)
		_grade--;
	else
		throw GradeTooLowException();
}
 */