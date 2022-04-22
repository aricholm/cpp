/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:25:50 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/20 18:58:38 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed _y;
public:
	Point();
	Point(const float x, const float y);
	Point(const int x, const int y);
	Point(const Fixed x, const Fixed y);
	Point(const Point& point);
	~Point();
	Point&	operator= (const Point& point);

	const Fixed&	getX() const;
	const Fixed&	getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif