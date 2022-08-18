#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice constructor" << std::endl;
}

Ice::Ice( const Ice & src ) : AMateria("ice")
{
	*this = src;
	std::cout << "Ice copy constructor" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	std::cout << "Ice destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & rhs )
{
	if ( this != &rhs )
		this->_type = rhs.getType();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Ice const & i )
{
	(void) i;
 	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria*	Ice::clone() const
{
	return new Ice(*this);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */