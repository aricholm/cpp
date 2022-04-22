/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:28:43 by aricholm          #+#    #+#             */
/*   Updated: 2022/03/31 09:29:05 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
private:
	std::string		_name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce();
	void	name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif /* ZOMBIE_HPP */
