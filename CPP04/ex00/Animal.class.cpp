/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:00:04 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/14 13:14:34 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal()
{
	cout << "Animal constructor called" << endl;
	return ;
}

Animal::Animal(Animal const &src)
{
	cout << "Animal copy constructor called" << endl;
	this->_type = src._type;
	return ;
}

Animal::~Animal()
{
	cout << "Animal destructor called" << endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}
