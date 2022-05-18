/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:40:22 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/18 13:40:24 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

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
protected:
	std::string		_type;
private:
	
};


#endif /* ANIMAL_HPP */
