# include <string>
# include <iostream>
# include "Intern.hpp"

Intern::Intern() {
	std::cout << "Default constructor called\n";
}

Intern::~Intern() {
	std::cout << "Destructor called\n";
}

Intern::Intern(const Intern &a) {
	(void)a;
	std::cout << "Copy constructor called\n";
}

Intern & Intern::operator = (const Intern &a) {
	(void)a;
	return (*this);
}

Form * Intern::makeForm(const char * formType, const char * targetName) {
	int i;
	std::string formTypeArray[3] = {
		"presidential pardon", "robotomy request", "shrubbery creation"
	};

	(void) targetName;
	i = 0;
	for (i = 0; i < 3; i++) {
		if (formTypeArray[i].compare(formType) == 0)
			break;
	}

	switch (i) {
		case 0:
			return new PresidentialPardonForm(std::string(targetName));
			break;
		case 1:
			return new RobotomyRequestForm(std::string(targetName));
			break;
		case 2:
			return new ShrubberyCreationForm(std::string(targetName));
			break;
		case 3:
			std::cout<< "no form type matches\n";
			break;
	}
	return NULL;
}
