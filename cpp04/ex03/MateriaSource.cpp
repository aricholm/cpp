/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:28:03 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/18 17:26:53 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_slot[i] = NULL;
	std::cout << "MateriaSource constructor" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	*this = src;
	std::cout << "MateriaSource copy constructor" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _slot[i];
	std::cout << "MateriaSource destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for (size_t i = 0; i < 4; i++)
		{
			if (rhs._slot[i])
				_slot[i] = rhs._slot[i]->clone();
			else
				_slot[i] = NULL;
		}
		
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i )
{
	(void)i;
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void    MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
	{
		if (_slot[i] == NULL)
		{
			_slot[i] = m;
			std::cout << "MateriaSource learns " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "MateriaSource's inventory is full" << std::endl;
    return ;
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_slot[i] != NULL && _slot[i]->getType() == type)
        {
			std::cout << "MateriaSource creates " << type << std::endl;
			return (_slot[i]->clone());
        }
	}
    std::cout << "MateriaSource has not learn " << type << std::endl;
	return NULL;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */