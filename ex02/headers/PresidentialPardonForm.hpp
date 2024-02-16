#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class PresidentialPardonForm : public AForm{
	private:
		std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &name);
		PresidentialPardonForm(const PresidentialPardonForm &a);
		~PresidentialPardonForm();
		PresidentialPardonForm & operator = (const PresidentialPardonForm &a);
		void executeAction() const;
};

#endif
