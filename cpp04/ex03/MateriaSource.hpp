/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:27:58 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/18 17:01:24 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

	public:

						MateriaSource();
						MateriaSource( MateriaSource const & src );
		virtual			~MateriaSource();
		void			learnMateria(AMateria *);
		AMateria		*createMateria(std::string const &type);
		MateriaSource &		operator=( MateriaSource const & rhs );

	private:
		AMateria*	_slot[4];

};

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i );

#endif /* *************************************************** MATERIASOURCE_H */