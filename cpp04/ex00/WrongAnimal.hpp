/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:40:36 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/18 13:40:37 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
					WrongAnimal();
					WrongAnimal(const std::string type);
	virtual			~WrongAnimal();
					WrongAnimal(const WrongAnimal& ref);
	WrongAnimal&			operator=(const WrongAnimal& ref);

	void			makeSound() const;
	std::string		getType() const;
protected:
	std::string		_type;
private:
	
};


#endif /* WRONGANIMAL_HPP */
