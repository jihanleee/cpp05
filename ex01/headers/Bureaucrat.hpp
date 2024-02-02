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

		void incrementGrade();
		void decrementGrade();

		const std::string & getName() const;
		const int & getGrade() const;

		class GradeTooHighException : public std::exception {
			public:
		virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
		virtual const char * what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat & b);

#endif
