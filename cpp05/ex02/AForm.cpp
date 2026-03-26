# include "AForm.hpp"

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "AForm Parameterized Constructor called" << std::endl;
	checkGrade(_gradeToSign);
	checkGrade(_gradeToExecute);
	std::cout << "Object successfully created for " << this->_name << std::endl;
}

// name must be initialized directly as it is const (immutable) in when creating the object
AForm::AForm(const AForm &copy) : _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
	std::cout << "AForm Copy Constructor called" << std::endl;
	checkGrade(_gradeToSign);
	checkGrade(_gradeToExecute);
    *this = copy;
}

AForm &AForm::operator=(const AForm &other)
{
	std::cout << "AForm Copy Assignment Operator called" << std::endl;
	if (this != &other)
	{
		// cannot change the _name, _gradeToSign, _gradeToExecute after the object is constructed, must be initialized at copy constructor 
        this->_isSigned = other.getStatus();
    }
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm Default Destructor called" << std::endl;
}

const std::string& AForm::getName() const
{
	return _name;
}

const bool& AForm::getStatus() const
{
    return _isSigned;
}

const int& AForm::getGradeToSign() const
{
	return _gradeToSign;
}

const int& AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

// Grade 1 - highest ; Grade 150 - lowest
void AForm::checkGrade(int grade)
{
    if (grade < 1)
    throw gradeTooHighException();
	else if (grade > 150)
    throw gradeTooLowException();
}

void AForm::beSigned(const Bureaucrat &brc)
{
    // check the bureaucrat grade higher/lower than grade to sign
    // throw exception if grade of bureaucrat to sign is higher/lower than _gradeToSign
    // if brc = 5, to sign is 10, means 5 is higher than 10, can sign
    // if brc = 10, to sign is 5, throw gradetoolow exception
    if (brc.getGrade() > this->getGradeToSign())
        throw gradeTooLowException();
    _isSigned = true;
}

// if exception is caught here, exception wont be caught at main
// it will find the nearest catch exception in a stack through unwinding
void AForm::signForm(const Bureaucrat &brc)
{
    try
    {
        if (this->getStatus() == false)
        {
            beSigned(brc);
            if (this->getStatus())
                std::cout << BLUE << brc.getName() << " signed " << this->getName() << RESET << std::endl;
        }
        else
            std::cout << GREEN << "AForm has been signed." << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << BLUE << brc.getName() << " couldn't sign " << this->getName() << " because " << e.what() << RESET << '\n';    
    }
}

// insertion overloading
// return stream by reference to allow chaining of multiple output
// pass both stream and object by reference
std::ostream &operator<<(std::ostream &out, const AForm  &obj)
{
	out << "AForm Name: " << obj.getName() << ", Status: " << obj.getStatus() << ", Grade To Sign: " << obj.getGradeToSign() << ", Grade To Execute: " << obj.getGradeToExecute() << ".";
	return out;
}

 void AForm::checkExecution(Bureaucrat const& executor) const
 {
    if (this->getStatus() == false)
        throw formNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw gradeTooLowException();
 }
