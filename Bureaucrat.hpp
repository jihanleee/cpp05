#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP
# include <string>
# include <iostream>

class Bureaucrat{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &a);
		~Bureaucrat();
		Bureaucrat & operator = (const Bureaucrat &a);
};

#endif
