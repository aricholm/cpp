#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm(std::string name, int sign, int exec) :	_name(name),
														_sign(sign),
														_exec(exec),
														_signed(false)
{
	if (sign < 1 || exec < 1)
		throw Bureaucrat::GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw Bureaucrat::GradeTooLowException();
}

AForm::AForm( const AForm & src ) :	_name(src.getName()),
									_sign(src.getSign()),
									_exec(src.getExec()),
									_signed(src.isSigned())
									{}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs.isSigned();
		this->_target = rhs.getTarget();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	o << "Form: " << i.getName() << " targeting " << i.getTarget()
		<< "\nCan be signed by " << i.getSign()
		<< ", can be executed by " << i.getExec() 
		<< ", signed: " << (i.isSigned() ? "Yes" : "No") << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > _sign)
		throw AForm::GradeTooLowException();
	else if (_signed)
		throw AForm::AlreadySignedException();
	else
		_signed = true;
}

void	AForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > _exec)
		throw AForm::GradeTooLowException();
	else if (!_signed)
		throw AForm::NotSignedException();
	else
		_doit();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	AForm::getName() const		{ return _name; }
std::string	AForm::getTarget() const	{ return _target; }
int			AForm::getSign() const		{ return _sign; }
int			AForm::getExec() const		{ return _exec; }
bool		AForm::isSigned() const		{ return _signed; }

/* ************************************************************************** */

const char* AForm::GradeTooHighException::what() const throw()
{
	return "FormException: Grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "FormException: Grade too low!";
}

const char* AForm::NotSignedException::what() const throw()
{
	return "FormException: Form not signed!";
}

const char* AForm::AlreadySignedException::what() const throw()
{
	return "FormException: Form already signed!";
}
