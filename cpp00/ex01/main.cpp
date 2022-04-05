/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:16:02 by aricholm          #+#    #+#             */
/*   Updated: 2022/03/19 12:45:44 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iostream>

int main()
{
	std::string	input;
	PhoneBook	phonebook;

	std::cout << "Welcome to the basic C++ PhoneBook!" << std::endl;
	while (input != "EXIT" && input != "exit")
	{
		std::cout << "You can ADD, SEARCH or EXIT from this program" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD" || input == "add")
			phonebook.addContact();
		else if (input == "SEARCH" || input == "search")
			phonebook.search();
		else if (input != "EXIT" && input != "exit")
			std::cout << "Invalid command" << std::endl;
	}
	return 0;
}
