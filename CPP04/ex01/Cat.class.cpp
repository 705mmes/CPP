/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:04:38 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/04 12:56:43 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Cat.class.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = src._type;
	delete this->_brain;
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

Cat &Cat::operator=(Cat const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	Cat::make_sound() const
{
	std::cout << "* " << this->_type << " sound *" << std::endl;
	return ;
}
