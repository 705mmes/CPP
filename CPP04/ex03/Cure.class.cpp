/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:26:22 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/05 20:46:28 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Default cure constructor called" << std::endl;
	return ;
}

Cure::Cure(Cure const &src) : AMateria("cure")
{
	*this = src;
	return ;
}

Cure::~Cure()
{
	std::cout << "Default cure destructor called" << std::endl;
	return ;
}

std::string const &Cure::getType() const
{
	return (this->_type);
}

AMateria *Cure::clone() const
{
	return (new Cure());
}

Cure	&Cure::operator=(Cure const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}
