# include <string>
# include <iostream>
# include "Form.hpp"

Form::Form() :_name("NO NAME") , isSigned(0), _gradeToSign(10), _gradeToExecute(10) {
	std::cout << "Default constructor called\n";
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) :_name(name), _isSigned(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	std::cout << "Form constructor called\n";
	if (GradeToSign < 1)
		throw GradeTooLowException();
	else if (GradeToSign > 150)
		throw GradeTooHighException();
	if (GradeToExecute < 1)
		throw GradeTooLowException();
	else if (GradeToExecute > 150)
		throw GradeTooHighException();
}

Form::~Form() {
	std::cout << "Destructor called\n";
}

Form::Form(const Form &a) : _name(a.getName()), _isSigned(a.getisSigned()), _gradeToSign(a.getGradeToSign()), _gradeToExecute(a.getGradeToExecute()) {
	std::cout << "Copy constructor called\n";
}

Form & Form::operator = (const Form &a) {
	_grade = a._grade;
	return (*this);
}

const std::string & Form::getName() const {
	return (_name);
}

const int & Form::getIsSigned() const {
	return (_isSigned);
}

const std::string & Form::gradeToSign() const {
	return (_gradeToSign);
}

const std::string & Form::gradeToExecute() const {
	return (_gradeToExecute);
}

std::ostream& operator<<(std::ostream& out, const Form & b) {
	return out << b.getName() << ", Form grade to sign " << b.getGradeToSign() << ", grade to execute" << b.getGradeToExecute() << ", and isSigned " << b.getIsSigned();
}

const char * Form::GradeTooHighException::what() const throw() {
	return "Form::GradeTooHighException thrown\n";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Form::GradeTooLowException thrown\n";
}

void Form::beSigned(const Bureaucrat & b) {
	if (b.getGrade() <= this->getGradeToSign) {
		b.signForm();
	}
	else
		throw GradeTooLowException();

}

/*seems like increment and decrement functions are not needed*/
/* void Form::incrementGrade(){
	if (_grade < 150)
		_grade++;
	else
		throw GradeTooHighException();
}

void Form::decrementGrade(){
	if (_grade > 1)
		_grade--;
	else
		throw GradeTooLowException();
}
 */