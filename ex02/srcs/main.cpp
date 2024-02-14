#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	try {
		std::cout<< "\nbureaucrat declaration test block\n";
		Bureaucrat bureauGuy("bureauGuy", 20);
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		std::cout<< "\nform exception test block1\n";
		PresidentialPardonForm ppf("ppf", 10, 20);
		ppf.executeAction();
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	std::cout << "\ntest done \n";
	return 0;
}
