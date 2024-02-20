#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main() {
	try {
		std::cout<< "\n\nIntern test block\n";
		Intern internHomie;
		Form * memeaw = internHomie.makeForm("shrubbery creation", "memeaw");
		if (memeaw)
			memeaw->execute(Bureaucrat("bureauguy", 1));
		delete memeaw;
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		std::cout<< "\n\nIntern test block\n";
		Intern internHomie;
		Form * memeaw = internHomie.makeForm("presidential pardon", "memeaw");
		if (memeaw)
			memeaw->execute(Bureaucrat("bureauguy", 1));
		delete memeaw;
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		std::cout<< "\n\nIntern test block\n";
		Intern internHomie;
		Form * memeaw = internHomie.makeForm("robotomy request", "memeaw");
		if (memeaw)
			memeaw->execute(Bureaucrat("bureauguy", 1));
		delete memeaw;
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		std::cout<< "\n\nIntern test block\n";
		Intern internHomie;
		Form * memeaw = internHomie.makeForm("robotomy request", "memeaw");
		if (memeaw)
			memeaw->execute(Bureaucrat("bureauguy", 1));
		delete memeaw;
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		std::cout<< "\n\nIntern test block\n";
		Intern internHomie;
		Form * memeaw = internHomie.makeForm("ninaw", "memeaw");
		if (memeaw)
			memeaw->execute(Bureaucrat("bureauguy", 1));
		delete memeaw;
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	std::cout << "\ntest done \n";
	return 0;
}
