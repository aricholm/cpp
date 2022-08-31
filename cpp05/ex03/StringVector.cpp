#include "StringVector.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

StringVector::StringVector(int n) : count(0)
{
	if (n <= 0)
		throw WrongIndex();
	elem = new std::string[n];
	sz = n;
}

StringVector::StringVector( const StringVector & src )
{
	(void) src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

StringVector::~StringVector()
{
	delete[] elem;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

StringVector &				StringVector::operator=( StringVector const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	(void) rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool	StringVector::has(const std::string string) const
{
	for (int i = 0; i < sz; i++)
	{
		if (elem[i] == string)
			return true;
	}
	return false;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string&	StringVector::operator[](int i) { return elem[i]; }
int				StringVector::size() const { return sz; }

void			StringVector::add(const std::string string)
{
	if (count >= sz)
		throw WrongIndex();
	elem[count++] = string; 
}

/* ************************************************************************** */

const char*	StringVector::WrongIndex::what() const throw()
{
	return "StringVector: Wrong index";
}
