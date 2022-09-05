/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:18:40 by aricholm          #+#    #+#             */
/*   Updated: 2022/09/04 13:32:08 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Data::Data(const std::string secret) : _secret(secret)
{
}

Data::Data( const Data & src ) : _secret(src.getSecret())
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Data::~Data()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Data &				Data::operator=( Data const & rhs )
{
	if ( this != &rhs )
	{
		this->_secret = rhs.getSecret();
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Data const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/
std::string		Data::getSecret() const { return _secret; }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
