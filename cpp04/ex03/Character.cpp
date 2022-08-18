#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
Character::Character() : _name("noname")
{
	for (size_t i = 0; i < 4; i++)
		_slot[i] = NULL;
//	_ground = NULL;
	std::cout << "Character constructor" << std::endl;
}

Character::Character(const std::string name) : _name(name)
{
	for (size_t i = 0; i < 4; i++)
		_slot[i] = NULL;
//	_ground = NULL;
	std::cout << "Character name " << name << " constructor" << std::endl;
}

Character::Character(const Character& ref) { *this = ref; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		delete _slot[i];
	} 
/*	while (_ground)
	{
		t_ground* tmp = _ground->next;
		delete _ground;
		_ground = tmp;
	}
	*/
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/
Character&	Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++)
		{
			if (rhs._slot[i])
				_slot[i] = rhs._slot[i]->clone();
			else
				_slot[i] = NULL;
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	o << "Value = " << i.getName();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (size_t i = 0; i < 4; i++)
	{
		if (!_slot[i])
		{
			_slot[i] = m;
			std::cout << _name << " equips " << m->getType() << " on slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "Inventory full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if (!_slot[idx])
		std::cout << "Empty slot" << std::endl;

	std::cout << _name << " left " << _slot[idx]->getType() << " on the floor" << std::endl;
/*	t_ground* tmp = new t_ground;
	tmp->materia = _slot[idx];
	tmp->next = _ground;
	_ground = tmp;*/
	_slot[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (!_slot[idx])
		std::cout << "No item found" << std::endl;
	_slot[idx]->use(target);
	delete _slot[idx];
	_slot[idx] = NULL;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const &	Character::getName() const { return _name;}
void				Character::setName(const std::string name) { _name = name;}

/* ************************************************************************** */