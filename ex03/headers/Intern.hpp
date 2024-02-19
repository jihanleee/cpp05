#ifndef Intern_HPP
# define Intern_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"
# include "AForm.hpp"
class Intern {
	public:
		Intern();
		Intern(const Intern &a);
		~Intern();
		Intern & operator = (const Intern &a);
		AForm * makeform(std::string & formType, std::string & targetName);
};


#endif
