# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm" , 72, 45), _target("NO NAME"){
	std::cout << "Default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: Form("RobotomyRequestForm", 72, 45), _target(target){
	std::cout << "RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Destructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a) 
	: Form(a.getName(), a.getGradeToSign(), a.getGradeToExecute()) {
	std::cout << "Copy constructor called\n";
	_isSigned =  a.getIsSigned();
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &a) {
	_gradeToSign = a.getGradeToSign();
	_gradeToExecute = a.getGradeToExecute();
	_isSigned = a.getIsSigned();
	return (*this);
}

void RobotomyRequestForm :: executeAction() const{
	std::ifstream file("/dev/random");
	char c;

	c = 0;
	std::cout << "Drddrdrddrdrdrdrddrdrdrddrrdr!!\n";
	file >> c;
		if (c % 2)
			std::cout << _target << " has been robotomized successfully.\n";
		else
			std::cout << "robotomization of "<< _target << " failed.\n";
	file.close();
}

