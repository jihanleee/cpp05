# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

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

Bureaucrat::Bureaucrat(const Bureaucrat &a) : _name(a._name), _grade(a._grade) {
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
	return "GradeTooHighException thrown\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "GradeTooLowException thrown\n";
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