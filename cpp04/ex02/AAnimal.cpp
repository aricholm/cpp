/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:53:40 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/18 13:42:39 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

//CANONICAL FORM
Animal::Animal() : _type("NoType")
{
	std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal& ref) : _type(ref.getType())
{
	std::cout << "Animal copy constructor" << std::endl;
}

Animal& Animal::operator= (const Animal& ref)
{
	std::cout << "Animal copy assignment" << std::endl;
	_type = ref.getType(); 
	*_brain = *ref.getBrain();
	return *this;
}

Animal::Animal(const std::string type) : _type(type)
{
	std::cout << "Animal type constructor" << std::endl;
}

std::string	Animal::getType() const { return (_type); }

void	Animal::makeSound() const
{
	std::cout << "** Static noise **" << std::endl;
}

Brain*	Animal::getBrain() const { return _brain; }

void	Animal::think(const std::string idea) { _brain->addIdea(idea); }
void	Animal::tell_everything() const { _brain->printIdeas(); }