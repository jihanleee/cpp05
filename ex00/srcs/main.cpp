#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat mohandohan("mohandohan", 20);
		std::cout << mohandohan << std::endl;
		mohandohan.incrementGrade();
		std::cout << "grade incremented :" << mohandohan<< std::endl;
		mohandohan.decrementGrade();
		std::cout << "grade decremented :" << mohandohan << std::endl;
		Bureaucrat johanbohan("johanbohan", -1);
		std::cout << johanbohan;
	}
	catch (std::exception & e) {
	/* handle exception */
		std::cout << e.what();
	}
	return 0;
}
