/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:00:17 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/18 14:11:44 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define NUMBER_OF_ANIMALS 8

int	main( void )
{
	{	
//		const AAnimal* meta = new AAnimal();
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
	//	meta->makeSound();

	//	delete meta;
		delete i;
		delete j;
		std::cout << std::endl;
	}
}
