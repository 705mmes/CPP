/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:00:04 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/03 13:01:45 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aanimal.class.hpp"

Aanimal::Aanimal()
{
	std::cout << "Aanimal constructor called" << std::endl;
	this->_type = "Aanimal";
	return ;
}

Aanimal::Aanimal(Aanimal const &src)
{
	std::cout << "Aanimal copy constructor called" << std::endl;
	this->_type = src._type;
	return ;
}

Aanimal::~Aanimal()
{
	std::cout << "Aanimal destructor called" << std::endl;
	return ;
}

Aanimal &Aanimal::operator=(Aanimal const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	Aanimal::make_sound() const
{
	std::cout << "* " << this->_type << " sound *" << std::endl;
	return ;
}

std::string	Aanimal::get_type() const
{
	return (this->_type);
}
