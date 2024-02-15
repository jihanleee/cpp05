# include <string>
# include <iostream>
# include "AForm.hpp"

AForm::AForm() :_name("NO NAME") , _isSigned(0), _gradeToSign(10), _gradeToExecute(10) {
	std::cout << "Default constructor called\n";
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) :_name(name), _isSigned(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	std::cout << "AForm constructor called\n";
	if (gradeToSign < 1)
		throw GradeTooLowException();
	else if (gradeToSign > 150)
		throw GradeTooHighException();
	if (gradeToExecute < 1)
		throw GradeTooLowException();
	else if (gradeToExecute > 150)
		throw GradeTooHighException();
}

AForm::~AForm() {
	std::cout << "Destructor called\n";
}

AForm::AForm(const AForm &a) : _name(a.getName()), _isSigned(a.getIsSigned()), _gradeToSign(a.getGradeToSign()), _gradeToExecute(a.getGradeToExecute()) {
	std::cout << "Copy constructor called\n";
}

AForm & AForm::operator = (const AForm &a) {
	_gradeToSign = a.getGradeToSign();
	_gradeToExecute = a.getGradeToExecute();
	_isSigned = a.getIsSigned();
	return (*this);
}

const std::string & AForm::getName() const {
	return (_name);
}

const bool & AForm::getIsSigned() const {
	return (_isSigned);
}

const int & AForm::getGradeToSign() const {
	return (_gradeToSign);
}

const int & AForm::getGradeToExecute() const {
	return (_gradeToExecute);
}

std::ostream& operator<<(std::ostream& out, const AForm & b) {
	return out << b.getName() << ", Form grade to sign " << b.getGradeToSign() << ", grade to execute" << b.getGradeToExecute() << ", and isSigned " << b.getIsSigned();
}

const char * AForm::GradeTooHighException::what() const throw() {
	return "AForm::GradeTooHighException thrown\n";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "AForm::GradeTooLowException thrown\n";
}

void AForm::beSigned(Bureaucrat & b) {
	if (b.getGrade() <= this->getGradeToSign()) {
		_isSigned = true;
		b.signForm(true, this->getName(), "");
	}
	else {
		b.signForm(false, this->getName(), "grade is too low");
		throw GradeTooLowException();
	}
}

void AForm::execute(Bureaucrat const & executor) const {
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	this->executeAction();
}
