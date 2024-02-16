#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class RobotomyRequestForm : public AForm{
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string &name);
		RobotomyRequestForm(const RobotomyRequestForm &a);
		~RobotomyRequestForm();
		RobotomyRequestForm & operator = (const RobotomyRequestForm &a);
		void executeAction() const;
};

#endif