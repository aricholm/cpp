/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:02:45 by aricholm          #+#    #+#             */
/*   Updated: 2022/03/31 10:34:08 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string 	string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "The memory address of the string variable: " << &string << "\n";
	std::cout << "The memory address held by stringPTR:      " << stringPTR << "\n";
	std::cout << "The memory address held by stringREF:      " << &stringREF << "\n\n";

	std::cout << "The value of the string variable:  " << string << "\n";
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << "\n";
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	return 0;
}
