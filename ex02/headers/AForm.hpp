#ifndef AForm_HPP
# define AForm_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class AForm{
	protected:
		const std::string _name;
		bool _isSigned;
		int _gradeToSign;
		int _gradeToExecute;
	public:
		AForm();
		AForm(const std::string &name, int gradeToSign, int gradeToExecute);
		AForm(const AForm &a);
		virtual ~AForm();
		AForm & operator = (const AForm &a);

    	const std::string & getName() const;
    	const bool & getIsSigned() const;
    	const int & getGradeToSign() const;
    	const int & getGradeToExecute() const;
		void beSigned(Bureaucrat & b);
	
		class GradeTooHighException : public std::exception {
			public:
		virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
		virtual const char * what() const throw();
		};

		void execute(Bureaucrat const & executor) const;
		virtual void executeAction() = 0; // pure virtual function to make it an abstract class.
};

std::ostream& operator<<(std::ostream& out, const AForm & b);

#endif
