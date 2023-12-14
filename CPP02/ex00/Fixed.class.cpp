/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:42:06 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/13 11:17:07 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_nb_bits = 8;

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	this->_nb = 0;
	return ;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
	return ;
}

Fixed::Fixed(const Fixed &src)
{
	cout << "Copy constructor called" << endl;
	this->_nb = src._nb;
	return ;
}

int	Fixed::set_raw_bits(int const raw)
{
	this->_nb = raw;
	return (0);
}

int	Fixed::get_raw_bits(void) const
{
	cout << "get_raw_bits called" << endl;
	return (this->_nb);
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	this->_nb = rhs._nb;
	return (*this);
}
