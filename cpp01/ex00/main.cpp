/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:28:27 by aricholm          #+#    #+#             */
/*   Updated: 2022/03/31 09:13:05 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
	std::string input;
	int			count = 0;
	Zombie*		heap[100];

	std::cout << "What would you like to do?\n" 
		<< "You can create zombies on the stack or on the heap" << std::endl;
	while (input != "EXIT" &&input != "exit")
	{
		std::cout << "Type STACK or HEAP or EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input == "STACK" || input == "stack")
		{
			std::cout << "How do you want to call it?" << std::endl;
			std::getline(std::cin, input);
			randomChump(input);
			input = "";
		}
		if (input == "HEAP" || input == "heap")
		{
			if (count == 100)
			{
				std::cout << "You've been overrun by zombies" << std::endl;
				break;
			}
			count++;
			std::cout << "How do you want to call it?" << std::endl;
			std::getline(std::cin, input);
			heap[count - 1] = newZombie(input);
			input = "";
		}
	}
	while (count)
		delete heap[count-- - 1];
	return 0;
}
