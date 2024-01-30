/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:40:07 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/30 10:57:08 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP
# include <iostream>
# include "AForm.class.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		// Intern(const Intern &src);
		// Intern	&operator=(const Intern &rhs);
		AForm	*makeForm(std::string name, std::string target);
		AForm	*robotomy(std::string target);
		AForm	*shrubbery(std::string target);
		AForm	*pardon(std::string target);
		class	WrongNameException : std::exception {
			public:
				virtual const char *what() const throw();
		};
};

#endif
