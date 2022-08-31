/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:07:05 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/26 11:29:44 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	{
		Bureaucrat b("Joe", 55);
		Form f("License to kill", 7);
		std::cout << b << std::endl << f << std::endl;
		b.signForm(f);
		b.promotion(50);
		std::cout << b << std::endl;
		b.signForm(f);
		std::cout << f << std::endl;
	}
	try
	{
		Form f("Legalize air", 0);
	}
	catch (std::exception& e) { std::cerr << e.what() << std::endl; }
	
	return 0;
}
