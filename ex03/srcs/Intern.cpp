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
	std::cout << "Copy constructor called\n";
}

Intern & Intern::operator = (const Intern &a) {
	return (*this);
}

AForm * makeform(std::string & formType, std::string & targetName) {
	int i;
	std::string formName[3] {
		""
	}

	i = 
	switch (formType) {
		case 
	}
}