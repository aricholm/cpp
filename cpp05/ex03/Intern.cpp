#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern() :	pardon(7),
					robotomy(7),
					shrubbery(7)
{
	robotomy.add("robotomy");
	robotomy.add("robotomy request");
	robotomy.add("robotomy request form");
	robotomy.add("Robotomy");
	robotomy.add("Robotomy Request");
	robotomy.add("Robotomy Request Form");
	robotomy.add("rrf");

	pardon.add("presidential");
	pardon.add("presidential pardon");
	pardon.add("presidential pardon form");
	pardon.add("Presidential");
	pardon.add("Presidential Pardon");
	pardon.add("Presidential Pardon Form");
	pardon.add("ppf");

	shrubbery.add("shrubbery");
	shrubbery.add("shrubbery creation");
	shrubbery.add("shrubbery creation form");
	shrubbery.add("Shrubbery");
	shrubbery.add("Shrubbery Creation");
	shrubbery.add("Shrubbery Creation Form");
	shrubbery.add("scf");
}

Intern::Intern( const Intern & src ) :pardon(7),
									robotomy(7),
									shrubbery(7)
{
	(void) src;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs )
	{
		return *this;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
AForm*	Intern::makeForm(const std::string formname, const std::string target) const
{
	switch (getForm(formname))
	{
		case robotomyr:
			return new RobotomyRequestForm(target);
		case presidentialp:
			return new PresidentialPardonForm(target);
		case shrubberyc:
			return new ShrubberyCreationForm(target);
		default:
			throw FormDoesNotExist();
	}
}

Intern::t_form	Intern::getForm(const std::string formname) const
{
	if (shrubbery.has(formname))
		return shrubberyc;
	if (pardon.has(formname))
		return presidentialp;
	if (robotomy.has(formname))
		return robotomyr;
	return none;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */

const char* Intern::FormDoesNotExist::what() const throw()
{
	return "InternException: Form does not exist!";
}
