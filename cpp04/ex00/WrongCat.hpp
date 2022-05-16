/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:30:35 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/16 13:29:08 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:

		WrongCat();
		WrongCat( WrongCat const & src );
		~WrongCat();
		WrongCat &		operator=( WrongCat const & rhs );

		void			makeSound( void ) const ;
	private:

};

std::ostream &			operator<<( std::ostream & o, WrongCat const & i );

#endif /* WRONGCAT_HPP */
