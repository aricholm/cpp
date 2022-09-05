/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:19:33 by aricholm          #+#    #+#             */
/*   Updated: 2022/09/01 22:27:47 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Converter.hpp"

int	main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage:\n" << argv[0] << " <parameter-to-convert>"
		<< std::endl;
		return 1;
	}
	try
	{
		Converter convert(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
