/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:37:34 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/20 18:51:28 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

// vector multiplications of one side and point should be all positive or all negative 
static Fixed norm_z(Point const base,
					Point const side,
					Point const point)
{
	Fixed a1 = side.getX() - base.getX();
	Fixed a2 = side.getY() - base.getY();
	Fixed b1 = point.getX() - base.getX();
	Fixed b2 = point.getY() - base.getY();
	return (a1 * b2 - b1 * a2);
}

bool	bsp(Point const a,
			Point const b,
			Point const c,
			Point const point)
{
	Fixed ab = norm_z(a, b, point);
	Fixed bc = norm_z(b, c, point);
	Fixed ca = norm_z(c, a, point);
	if (ab > 0 && bc > 0 && ca > 0)
		return (true);
	if (ab < 0 && bc < 0 && ca < 0)
		return (true);
	return (false);
}
