/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:46:13 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/16 13:22:48 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		~Dog();
		Dog &		operator=( Dog const & rhs );

		virtual void	makeSound( void ) const ;
	private:

};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* DOG_HPP */
