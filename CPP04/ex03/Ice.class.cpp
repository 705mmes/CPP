/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:15:38 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/10 11:42:06 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Default ice constructor called" << std::endl;
	return ;
}

Ice::Ice(Ice const &src) : AMateria("ice")
{
	*this = src;
	return ;
}

Ice::~Ice()
{
	std::cout << "Default ice destructor called" << std::endl;
	return ;
}

std::string const &Ice::getType() const
{
	return (this->_type);
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

Ice	&Ice::operator=(Ice const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}
