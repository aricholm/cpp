/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:07:05 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/25 18:43:30 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b("Joe");

	try
	{
		std::cout << b << std::endl;
		b.promotion();
		std::cout << b << std::endl;
		b.promotion(33);
		std::cout << b << std::endl;
		b.demotion(35);
	}
	catch (std::exception& e)
	{ 
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat c("Jane", 12);
		std::cout << c << std::endl;
		c.promotion(11);
		std::cout << c << std::endl;
		c.promotion();
	}
	catch (std::exception& e)
	{ 
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}

	return 0;
}
