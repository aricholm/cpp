/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:52:51 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/18 16:54:00 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
							Cure();
							Cure( Cure const & src );
		virtual				~Cure();

		Cure &				operator=( Cure const & rhs );
		virtual void		use(ICharacter& target);
		virtual AMateria	*clone() const;
	private:
};

std::ostream &				operator<<( std::ostream & o, Cure const & i );

#endif /* ************************************************************ CURE_H */