# include <string>
# include <iostream>
# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm" , 145, 137), _target("NO NAME"){
	std::cout << "Default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: AForm("ShrubberyCreationForm", 145, 137), _target(target){
	std::cout << "ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Destructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a) 
	: AForm(a.getName(), a.getGradeToSign(), a.getGradeToExecute()) {
	std::cout << "Copy constructor called\n";
	_isSigned =  a.getIsSigned();
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &a) {
	_gradeToSign = a.getGradeToSign();
	_gradeToExecute = a.getGradeToExecute();
	_isSigned = a.getIsSigned();
	return (*this);
}

void ShrubberyCreationForm :: executeAction() const{
	std::ofstream outfile;

	std::cout << "meow\n";
}

/*seems like increment and decrement functions are not needed*/
/* void ShrubberyCreationForm::incrementGrade(){
	if (_grade < 150)
		_grade++;
	else
		throw GradeTooHighException();
}

void ShrubberyCreationForm::decrementGrade(){
	if (_grade > 1)
		_grade--;
	else
		throw GradeTooLowException();
}
 */