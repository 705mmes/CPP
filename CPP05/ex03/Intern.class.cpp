/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:40:05 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/30 11:00:46 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.class.hpp"

Intern::Intern()
{
	std::cout << "Default Intern constructor" << std::endl;
	return ;
}

Intern::~Intern()
{
	std::cout << "Default Intern destructor called" << std::endl;
	return ;
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	std::string tab[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm* (Intern::*functarray[3])(std::string) = {
        &Intern::robotomy,
        &Intern::pardon,
        &Intern::shrubbery
    };
	for (int i = 0; i < 3; i++)
	{
		if (tab[i] == name)
		{
			AForm *r = (this->*functarray[i])(target);
			std::cout << "Intern creates " << name << std::endl;
			return (r);
		}
	}
	throw WrongNameException();
	return (NULL);
}

AForm	*Intern::robotomy(std::string target)
{
	AForm	*r = new Robotomy(target);
	return (r);
}

AForm	*Intern::shrubbery(std::string target)
{
	AForm	*r = new Shrubbery(target);
	return (r);
}

AForm	*Intern::pardon(std::string target)
{
	AForm	*r = new Presidential(target);
	return (r);
}

const char*	Intern::WrongNameException::what() const throw()
{
	return ("wrong form name");
}
