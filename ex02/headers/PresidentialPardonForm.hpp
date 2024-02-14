#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class PresidentialPardonForm : public AForm{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &name, int gradeToSign, int gradeToExecute);
		PresidentialPardonForm(const PresidentialPardonForm &a);
		~PresidentialPardonForm();
		PresidentialPardonForm & operator = (const PresidentialPardonForm &a);
		void executeAction();
};

#endif
