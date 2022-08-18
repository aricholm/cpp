#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor" << std::endl;
}

Cure::Cure( const Cure & src ) : AMateria("cure")
{
	*this = src;
	std::cout << "Cure copy constructor called" << std::endl;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	std::cout << "Cure destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cure const & i )
{
	(void) i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wound" << std::endl;
}

AMateria	*Cure::clone() const
{
	return new Cure(*this);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */