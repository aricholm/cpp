/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:56:37 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/20 20:17:05 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
//CHOOSE 
/*
//FROM CIN
	float flx, fly;
	std::cout << "X coordinate of first point of the triangle:\n";
	std::cin >> flx; 
	std::cout << "Y coordinate of first point of the triangle:\n";
	std::cin >> fly; 
	Point a(flx, fly);
	std::cout << "X coordinate of second point of the triangle:\n";
	std::cin >> flx; 
	std::cout << "Y coordinate of second point of the triangle:\n";
	std::cin >> fly; 
	Point c(flx, fly);
	std::cout << "X coordinate of third point of the triangle:\n";
	std::cin >> flx; 
	std::cout << "Y coordinate of third point of the triangle:\n";
	std::cin >> fly; 
	Point b(flx, fly);
	std::cout << "X coordinate of the point:\n";
	std::cin >> flx; 
	std::cout << "Y coordinate of the point:\n";
	std::cin >> fly; 
	Point point(flx, fly);
*/
//FIX
	Point a(0, 0);
	Point b(0, 3);
	Point c(4, 0);
	Point point(1, 1);

	if (bsp(a, b, c, point))
		std::cout << "The point is part of the triangle" << std::endl;
	else
		std::cout << "The point is not part of the triangle" << std::endl;
}