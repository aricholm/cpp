/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:37:07 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/01 12:14:09 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl	Karen;

	if (argc == 2)
	{
		std::string str = argv[1];
		Karen.complain_alot(str);
	}
	return 0;
}
