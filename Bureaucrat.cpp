# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :_name("NO NAME") , _grade(10) {
	std::cout << "Default constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) :_name(name) , _grade(grade) {
	std::cout << "Bureaucrat constructor called\n";
	if (_grade < 1 || _grade > 150)
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
