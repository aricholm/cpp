#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(const std::string name) : _count(0)
{
	_name = name;
	for (size_t i = 0; i < 4; i++)
		_slot[i] = NULL;

	std::cout << "Character name constructor called" << std::endl;
}

Character::Character(const Character& ref)
{
	_name = ref.getName();
	for (size_t i = 0; i < ref._count; i++)
	{
		/* code */
	}
	
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (size_t i = 0; i < _count; i++)
	{
		delete _slot[i];
	}
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


void	Character::equip(AMateria* m)
{

}
void	Character::unequip(int idx)
{

}
void	Character::use(int idx, ICharacter& target)
{

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const &	Character::getName() const { return _name;}

/* ************************************************************************** */