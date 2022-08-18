/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:00:17 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/17 16:19:55 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define NUMBER_OF_ANIMALS 8

int	main( void )
{
	Animal	*animals[NUMBER_OF_ANIMALS];
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}
	animals[7]->think("I'm thinking");
	animals[7]->think("I'm having a great idea");
	animals[7]->think("Brain");
	animals[7]->think("Brian");
	std::cout << "\nFirst animals thoughts:" << std::endl;
	animals[7]->tell_everything();
	std::cout << "\nSecond animals thoughts:" << std::endl;
	*(animals[5]) = *(animals[7]);
	animals[5]->tell_everything();
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		delete animals[i];
}
