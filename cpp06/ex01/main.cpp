/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:16:32 by aricholm          #+#    #+#             */
/*   Updated: 2022/09/05 10:58:20 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <stdint.h>

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);	
}

int main()
{
	Data		data("HELLO WORLD!");
	Data*		mutant;

	mutant = deserialize(serialize(&data));

	std::cout << "Original pointer: " << &data << std::endl;
	std::cout << "Reinterpreted pointer: " << mutant << std::endl;
	std::cout <<  std::endl;
	std::cout << "Original string: " << data.getSecret() << std::endl;
	std::cout << "Reinterpreted string: " << mutant->getSecret() << std::endl;
	
	return 0;
}
