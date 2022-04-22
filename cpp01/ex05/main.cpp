/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:51:05 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/01 11:20:01 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main()
{
	Harl	Karen;
	std::cout << "THREAT LEVELS: DEBUG | INFO | WARNING | ERROR\n"
			<< "What level are we on?" << std::endl;
	std::string level;
	getline(std::cin, level);
	Karen.complain(level);
	return 0;
}
