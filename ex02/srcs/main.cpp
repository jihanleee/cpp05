#include "Bureaucrat.hpp"
#include "Form.hpp"

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
		Form tooHigh("tooHigh", 160, 160);
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		std::cout<< "\nform exception test block2\n";
		Form tooLow("tooLow", 0, 0);
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		std::cout<< "\nsuccessful signature test block\n";
		Bureaucrat bureauGuy("bureauGuy", 20);
		Form good("goodform", 30, 30);

		good.beSigned(bureauGuy);
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		std::cout<< "\nunsuccessful signature test block\n";
		Bureaucrat bureauGuy("bureauGuy", 20);
		Form bad("badform", 10, 10);

		bad.beSigned(bureauGuy);
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	std::cout << "\ntest done \n";
	return 0;
}
