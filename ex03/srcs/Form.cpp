# include <string>
# include <iostream>
# include "Form.hpp"

Form::Form() :_name("NO NAME") , _isSigned(0), _gradeToSign(10), _gradeToExecute(10) {
	std::cout << "Default constructor called\n";
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) :_name(name), _isSigned(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	std::cout << "Form constructor called\n";
	if (gradeToSign < 1)
		throw GradeTooLowException();
	else if (gradeToSign > 150)
		throw GradeTooHighException();
	if (gradeToExecute < 1)
		throw GradeTooLowException();
	else if (gradeToExecute > 150)
		throw GradeTooHighException();
}

Form::~Form() {
	std::cout << "Destructor called\n";
}

Form::Form(const Form &a) : _name(a.getName()), _isSigned(a.getIsSigned()), _gradeToSign(a.getGradeToSign()), _gradeToExecute(a.getGradeToExecute()) {
	std::cout << "Copy constructor called\n";
}

Form & Form::operator = (const Form &a) {
	_gradeToSign = a.getGradeToSign();
	_gradeToExecute = a.getGradeToExecute();
	_isSigned = a.getIsSigned();
	return (*this);
}

const std::string & Form::getName() const {
	return (_name);
}

const bool & Form::getIsSigned() const {
	return (_isSigned);
}

const int & Form::getGradeToSign() const {
	return (_gradeToSign);
}

const int & Form::getGradeToExecute() const {
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

void Form::beSigned(Bureaucrat & b) {
	if (b.getGrade() <= this->getGradeToSign()) {
		_isSigned = true;
		b.signForm(true, this->getName(), "");
	}
	else {
		b.signForm(false, this->getName(), "grade is too low");
		throw GradeTooLowException();
	}
}

void Form::execute(Bureaucrat const & executor) const {
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	this->executeAction();
}

void Form::executeAction() const {

}
