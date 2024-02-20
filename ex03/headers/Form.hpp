#ifndef Form_HPP
# define Form_HPP
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Form{
	protected:
		const std::string _name;
		bool _isSigned;
		int _gradeToSign;
		int _gradeToExecute;
	public:
		Form();
		Form(const std::string &name, int gradeToSign, int gradeToExecute);
		Form(const Form &a);
		virtual ~Form();
		Form & operator = (const Form &a);

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
		virtual void executeAction() const;
};

std::ostream& operator<<(std::ostream& out, const Form & b);

#endif
