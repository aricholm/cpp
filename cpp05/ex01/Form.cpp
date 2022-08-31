#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string name, int grade, int exec) : _name(name), _grade(grade), _execute(exec), _signed(false)
											
{
	if (grade < 1 || exec < 1)
		throw Form::GradeTooHighException();
	if (grade > 150 || exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form & src ) :	_name(src.getName()),
									_grade(src.getGrade()),
									_execute(src.getExec()),
									_signed(src.isSigned())
									{}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs.isSigned();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form: Name: " << i.getName() << ", grade: " << i.getGrade()
		<< ", signed: " << (i.isSigned() ? "Yes" : "No");
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > _grade)
		throw Form::GradeTooLowException();
	else
		_signed = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Form::getName() const	{ return _name; }
int			Form::getGrade() const	{ return _grade; }
int			Form::getExec() const	{ return _execute; }
bool		Form::isSigned() const	{ return _signed; }

/* ************************************************************************** */

const char* Form::GradeTooHighException::what() const throw()
{
	return "FormExeption: Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "FormExeption: Grade too low!";
}
