/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 10:08:30 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/26 17:09:47 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{

	public:

							AForm(std::string name, int sign = 150, int exec = 100);
							AForm( AForm const & src );
							~AForm();

		void				beSigned(const Bureaucrat & b);
		void				execute(const Bureaucrat& b) const;

		std::string			getName() const;
		std::string			getTarget() const;
		int					getSign() const;
		int					getExec() const;
		bool				isSigned() const;
		
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw(); };
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw(); };
		class NotSignedException : public std::exception {
			virtual const char* what() const throw(); };
		class AlreadySignedException : public std::exception {
			virtual const char* what() const throw(); };

	private:
	protected:
		AForm &				operator=( AForm const & rhs );
		const std::string	_name;
		const int			_sign;
		const int			_exec;
		bool				_signed;
		std::string			_target;
		virtual void		_doit() const = 0;
		

};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* AFORM_HPP */
