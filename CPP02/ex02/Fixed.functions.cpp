/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.functions.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:39:47 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/13 12:35:06 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

float	Fixed::to_float() const
{
	return(this->_nb / pow(2, this->_nb_bits));
}

int		Fixed::to_int() const
{
	return ((roundf(this->_nb / pow(2, this->_nb_bits))));
}

int	Fixed::set_raw_bits(int const raw)
{
	this->_nb = raw * pow(2, this->_nb_bits) + 0.5;
	return (0);
}

int	Fixed::get_raw_bits(void) const
{
	return (this->_nb);
}

Fixed Fixed::min(Fixed &x, Fixed &y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

Fixed Fixed::min(const Fixed &x, const Fixed &y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

Fixed	Fixed::max(Fixed &x, Fixed &y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

Fixed Fixed::max(const Fixed &x, const Fixed &y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

