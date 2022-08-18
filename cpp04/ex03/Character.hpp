/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:13:32 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/18 17:19:24 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"
/*
typedef struct s_ground {
	s_ground*	next;
	AMateria*	materia;
}	t_ground;
*/
class Character : public ICharacter
{

	public:
							Character();
							Character( Character const & src );
							Character(const std::string name);
		virtual				~Character();
		
		Character &			operator=( Character const & rhs );

		std::string const & getName() const;
		void				setName(const std::string name);
		void				equip(AMateria* m);
		void 				unequip(int idx);
		void				use(int idx, ICharacter& target);
//		void				printSlots() const;
//		AMateria*			getSlot(int idx) const;
	private:
		AMateria*			_slot[4];
		std::string			_name;
//		t_ground*			_ground;
		
};

std::ostream &				operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */