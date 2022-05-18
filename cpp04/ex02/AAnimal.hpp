/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:39:41 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/18 13:49:30 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
public:
					AAnimal();
					AAnimal(const std::string type);
	virtual			~AAnimal();
					AAnimal(const AAnimal& ref);
	AAnimal&			operator=(const AAnimal& ref);

	virtual void	makeSound() const = 0;
	std::string		getType() const;
	Brain*			getBrain() const;
	void			think(const std::string idea);
	void			tell_everything() const;
protected:
	std::string		_type;
	Brain*			_brain;
private:
	
};

#endif /* AANIMAL_HPP */
