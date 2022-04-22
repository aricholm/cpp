/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:17:46 by aricholm          #+#    #+#             */
/*   Updated: 2022/03/31 10:01:49 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
	std::cout << "How many zombies would you like?" << std::endl;
	int zombies;
	std::cin >> zombies;
	std::cin.ignore(256, '\n');
	if (zombies < 0)
	{
		std::cout << "Invalid input! Better luck next time!" << std::endl;
		return 1;
	}
	std::cout << "What do you want them to be called?" << std::endl;
	std::string name;
	std::getline(std::cin, name);
	Zombie* horde = zombieHorde(zombies, name);
	std::cout << "Bye-bye zombies!" << std::endl;
	delete[] horde;
	return 0;
}