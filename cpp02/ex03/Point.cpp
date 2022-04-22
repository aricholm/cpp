/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:22:57 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/20 19:02:59 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0) , _y(0) {}
Point::Point(const float x, const float y) :_x(x), _y(y) {}
Point::Point(const int x, const int y) :_x(x), _y(y) {}
Point::Point(const Fixed x, const Fixed y) :_x(x), _y(y) {}
Point::Point(const Point& point) : _x(point.getX()), _y(point.getY()) {}
Point::~Point() {}

const Fixed&	Point::getX() const { return (_x); }
const Fixed&	Point::getY() const { return (_y); }

Point&	Point::operator=(const Point& point)
{
	(void)point;
	std::cout << "You cannot change the attributes of the point!" << std::endl;
	return (*this);
}