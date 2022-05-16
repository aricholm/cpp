/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:53:40 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/16 13:19:50 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

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
	_type = ref.getType();
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
