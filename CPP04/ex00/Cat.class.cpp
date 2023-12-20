/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:04:38 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/14 16:52:20 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Cat.class.hpp"

Cat::Cat()
{
	cout << "Cat constructor called" << endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(Cat const &src)
{
	cout << "Cat copy constructor called" << endl;
	this->_type = src._type;
	return ;
}

Cat::~Cat()
{
	cout << "Cat destructor called" << endl;
	return ;
}

Cat &Cat::operator=(Cat const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	Cat::make_sound() const
{
	cout << "* " << this->_type << " sound *" << endl;
	return ;
}
