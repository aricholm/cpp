/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:53:40 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/16 13:18:36 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//CANONICAL FORM
WrongAnimal::WrongAnimal() : _type("NoType")
{
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& ref) : _type(ref.getType())
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& ref)
{
	_type = ref.getType();
	return *this;
}

WrongAnimal::WrongAnimal(const std::string type) : _type(type)
{
	std::cout << "WrongAnimal type constructor" << std::endl;
}

std::string	WrongAnimal::getType() const { return (_type); }

void	WrongAnimal::makeSound() const
{
	std::cout << "** Alien noise **" << std::endl;
}
