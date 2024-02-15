#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &name);
		ShrubberyCreationForm(const ShrubberyCreationForm &a);
		~ShrubberyCreationForm();
		ShrubberyCreationForm & operator = (const ShrubberyCreationForm &a);
		void executeAction() const;
};

#endif
