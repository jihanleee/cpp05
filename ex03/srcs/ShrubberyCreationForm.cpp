
# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreationForm" , 145, 137), _target("NO NAME"){
	std::cout << "Default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: Form("ShrubberyCreationForm", 145, 137), _target(target){
	std::cout << "ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Destructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a) 
	: Form(a.getName(), a.getGradeToSign(), a.getGradeToExecute()) {
	std::cout << "Copy constructor called\n";
	_isSigned =  a.getIsSigned();
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &a) {
	_gradeToSign = a.getGradeToSign();
	_gradeToExecute = a.getGradeToExecute();
	_isSigned = a.getIsSigned();
	return (*this);
}

void ShrubberyCreationForm :: executeAction() const{
	std::ofstream outFile;
	std::string fileName;

	fileName = _target;
	fileName.append("_shrubbery");
	outFile.open(fileName.c_str());
	outFile << "     ccee88oo\n";
	outFile<<"  C8O8O8Q8PoOb o8oo\n";
	outFile<<" dOB69QO8PdUOpugoO9bD\n";
	outFile<<"CgggbU8OU qOp qOdoUOdcb\n";
	outFile<<"    6OuU  /p u gcoUodpP\n";
	outFile<<"      \\\\\\//  /douUP\n";
	outFile<<"        \\\\\\////\n";
	outFile<<"         |||/\\\n";
	outFile<<"         |||\\/\n";
	outFile<<"         |||||\n";
	outFile<<"   .....//||||\\....\";";
	outFile.close();
}
