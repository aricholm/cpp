/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:07:05 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/31 16:20:41 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Intern i;
	AForm* form;
	
	form = i.makeForm("ppf", "Ringo");
	
	Bureaucrat a("John", 12);
	Bureaucrat b("Paul", 2);
	
	a.signForm(*form);
	b.executeForm(*form);

	try
	{
		form = i.makeForm("no form", "George");
		std::cout << form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return 0;
}
