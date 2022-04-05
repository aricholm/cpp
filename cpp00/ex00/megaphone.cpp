/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:25:07 by aricholm          #+#    #+#             */
/*   Updated: 2022/03/18 16:08:57 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (--argc)
	{
		argv++;
		for (size_t i = 0; i < strlen(*argv); i++)
			(*argv)[i] = std::toupper((*argv)[i]);
		std::cout << *argv;
	}
	std::cout << std::endl;
	return (0);
}
