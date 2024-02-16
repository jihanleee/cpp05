#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	try {
		std::cout<< "\n\nPresidentialPardonForm test block\n";
		Bureaucrat bureauGuy("bureauGuy", 1);
		PresidentialPardonForm ppf("ppf");
		ppf.beSigned(bureauGuy);
		bureauGuy.executeForm(ppf);
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	std::cout << "\ntest done \n";
	return 0;
}
