/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:02:43 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/22 11:56:02 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

Presidential::Presidential() : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "Default Presidential constructor called" << std::endl;
	return ;	
}

Presidential::Presidential(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "Default Presidential constructor called" << std::endl;
	return ;
}

Presidential::Presidential(Presidential const &src) : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "Presidentioal Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Presidential::~Presidential()
{
	std::cout << "Default Presidential destructor called" << std::endl;
	return ;
}

void	Presidential::execute(Bureaucrat const &executor) const
{
	if (this->get_signed() != true)
			throw FormSignedException();
	if (executor.get_grade() > this->get_e())
		throw GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return ;
}

Presidential &Presidential::operator=(Presidential const &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}