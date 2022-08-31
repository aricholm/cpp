/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:07:05 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/31 16:18:44 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		ShrubberyCreationForm form("kert");
		Bureaucrat a("Géza", 1);
		Bureaucrat b("Hedvig", 4);
		a.signForm(form);
		std::cout << form ;
		b.executeForm(form);
		std::cout << std::endl;
	}
	{
		PresidentialPardonForm form("Bobo");
		Bureaucrat a("Géza", 1);
		Bureaucrat b("Hedvig", 4);
		a.signForm(form);
		std::cout << form ;
		b.executeForm(form);
		std::cout << std::endl;
	}
	{
		RobotomyRequestForm form("Bender");
		Bureaucrat a("Géza", 1);
		Bureaucrat b("Hedvig", 4);
		a.signForm(form);
		std::cout << form ;
		b.executeForm(form);
		std::cout << std::endl;
	}
	{
		PresidentialPardonForm form("Bobo");
		Bureaucrat g("Géza", 150);
		Bureaucrat h("Hedvig", 1);
		Bureaucrat i("László", 100);
		i.executeForm(form);
		h.signForm(form);
		std::cout << form ;
		g.executeForm(form);
		std::cout << std::endl;
	}

	return 0;
}
