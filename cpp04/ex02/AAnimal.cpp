/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:53:40 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/18 13:52:25 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

//CANONICAL FORM
AAnimal::AAnimal() : _type("NoType")
{
	std::cout << "AAnimal constructor" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal& ref) : _type(ref.getType())
{
	std::cout << "AAnimal copy constructor" << std::endl;
}

AAnimal& AAnimal::operator= (const AAnimal& ref)
{
	std::cout << "AAnimal copy assignment" << std::endl;
	_type = ref.getType(); 
	*_brain = *ref.getBrain();
	return *this;
}

AAnimal::AAnimal(const std::string type) : _type(type)
{
	std::cout << "AAnimal type constructor" << std::endl;
}

std::string	AAnimal::getType() const { return (_type); }

void	AAnimal::makeSound() const
{
	std::cout << "** Static noise **" << std::endl;
}

Brain*	AAnimal::getBrain() const { return _brain; }

void	AAnimal::think(const std::string idea) { _brain->addIdea(idea); }
void	AAnimal::tell_everything() const { _brain->printIdeas(); }