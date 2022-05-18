#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain(): count(0)
{
	std::cout << "Brain constructor" << std::endl;

}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain copystructor" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (size_t i = 0; i < 100; i++)
			ideas[i] = rhs.ideas[i];
		count = rhs.count;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const &)
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Brain::addIdea(const std::string idea)
{
	ideas[count++] = idea;
}

void	Brain::printIdeas() const
{
	for (size_t i = 0; i < count; i++)
	{
		std::cout << ideas[i] << "\n";
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */