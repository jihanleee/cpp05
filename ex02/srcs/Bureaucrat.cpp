# include <string>
# include <iostream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"
Bureaucrat::Bureaucrat() :_name("NO NAME") , _grade(10) {
	std::cout << "Default constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) :_name(name) , _grade(grade) {
	std::cout << "Bureaucrat constructor called\n";
	if (_grade < 1)
		throw GradeTooLowException();
	else if (_grade > 150)
		throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &a) : _name(a.getName()), _grade(a.getGrade()) {
	std::cout << "Copy constructor called\n";
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &a) {
	_grade = a._grade;
	return (*this);
}

const std::string & Bureaucrat::getName() const {
	return (_name);
}

const int & Bureaucrat::getGrade() const {
	return (_grade);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat & b) {
	return out << b.getName() << ", bureaucrat grade " << b.getGrade();
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat::GradeTooHighException thrown\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat::GradeTooLowException thrown\n";
}

void Bureaucrat::incrementGrade(){
	if (_grade < 150)
		_grade++;
	else
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade(){
	if (_grade > 1)
		_grade--;
	else
		throw GradeTooLowException();
}

void Bureaucrat::signForm(bool isSigned, const std::string & form, const std::string & reason) {
	if (isSigned)
		std::cout << this->getName() << " signed " << form << std::endl; 
	else
		std::cout << this->getName() << " couldn't sign " << form \
		<< " because " << reason << std::endl; 
}

void Bureaucrat::executeForm(AForm const & form) {
	if (this->getGrade() <= form.getGradeToExecute()) {
		form.execute(*this);
	}
	else {
		std::cout << this->getName() << " couldn't execute the form because the grade is too low\n";
		throw GradeTooLowException();
	}

}