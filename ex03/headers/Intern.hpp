#ifndef Intern_HPP
# define Intern_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern &a);
		~Intern();
		Intern & operator = (const Intern &a);
		Form * makeForm(const char * formType, const char * targetName);
};


#endif
