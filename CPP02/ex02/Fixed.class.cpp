/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:21:01 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/13 12:17:09 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_nb_bits = 8;

Fixed::Fixed() : _nb(0)
{
	cout << "Default constructor called" << endl;
	return ;
}

Fixed::Fixed(const Fixed &src)
{
	cout << "Copy constructor called" << endl;
	this->_nb = src._nb;
	return ;
}

Fixed::Fixed(const int nb)
{
	cout << "Int constructor called" << endl;
	this->_nb = nb * pow(2, this->_nb_bits) + 0.5;
	return ;
}

Fixed::Fixed(const float nb)
{
	cout << "Float constructor called" << endl;
	cout << nb << endl;
	this->_nb = nb * pow(2, this->_nb_bits) + 0.5;
	return ;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
	return ;
}
