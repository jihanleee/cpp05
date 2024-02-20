#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP
# include <string>
# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class RobotomyRequestForm : public Form{
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