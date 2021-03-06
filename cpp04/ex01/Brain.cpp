/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:39:59 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/18 13:40:01 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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