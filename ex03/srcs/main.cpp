#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	try {
		std::cout<< "\n\nShrubberyCreationForm test block\n";
		Bureaucrat bureauGuy("bureauGuy", 1);
		ShrubberyCreationForm shro("shro");
		std::cout << "grade to sign : " << shro.getGradeToSign() << std::endl;
		std::cout << "grade to execute : " << shro.getGradeToExecute() << std::endl;
		shro.beSigned(bureauGuy);
		bureauGuy.executeForm(shro);
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		std::cout<< "\n\nShrubberyCreationForm exception test block\n";
		Bureaucrat bureauGuy("bureauGuy", 149);
		ShrubberyCreationForm shro("shro");
		shro.beSigned(bureauGuy);
		bureauGuy.executeForm(shro);
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		std::cout<< "\n\nRobotomyRequestForm test block\n";
		Bureaucrat bureauGuy("bureauGuy", 1);
		RobotomyRequestForm robo("robo");
		std::cout << "grade to sign : " << robo.getGradeToSign() << std::endl;
		std::cout << "grade to execute : " << robo.getGradeToExecute() << std::endl;
		bureauGuy.executeForm(robo);
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		std::cout<< "\n\nRobotomyRequestForm exception test block\n";
		Bureaucrat bureauGuy("bureauGuy", 145);
		RobotomyRequestForm robo("robo");
		robo.beSigned(bureauGuy);
		bureauGuy.executeForm(robo);
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		std::cout<< "\n\nPresidentialPardonForm test block\n";
		Bureaucrat bureauGuy("bureauGuy", 1);
		PresidentialPardonForm ppf("ppf");
		std::cout << "grade to sign : " << ppf.getGradeToSign() << std::endl;
		std::cout << "grade to execute : " << ppf.getGradeToExecute() << std::endl;
		ppf.beSigned(bureauGuy);
		bureauGuy.executeForm(ppf);
	}
	catch (std::exception & e) {
		std::cout << e.what();
	}
	try {
		std::cout<< "\n\nPresidentialPardonForm exception test block\n";
		Bureaucrat bureauGuy("bureauGuy", 140);
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
