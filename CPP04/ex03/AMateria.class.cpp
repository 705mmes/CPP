/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:24:27 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/04 16:09:13 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"

AMateria::AMateria(const std::string &type)
{
	std::cout << "Default AMateria constructor called" << std::endl;
	this->_type = type;
	return ;
}

AMateria::~AMateria()
{
	std::cout << "Default AMateria destructor called" << std::endl;
	return ;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter	&target)
{
	return ;
}
