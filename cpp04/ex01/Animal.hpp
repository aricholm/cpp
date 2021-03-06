/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:39:49 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/18 13:39:52 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
public:
					Animal();
					Animal(const std::string type);
	virtual			~Animal();
					Animal(const Animal& ref);
	Animal&			operator=(const Animal& ref);

	virtual void	makeSound() const;
	std::string		getType() const;
	Brain*			getBrain() const;
	void			think(const std::string idea);
	void			tell_everything() const;
protected:
	std::string		_type;
	Brain*			_brain;
private:
	
};


#endif /* ANIMAL_HPP */
