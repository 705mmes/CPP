/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.operators.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:40:55 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/20 13:37:32 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed &Fixed::operator=(Fixed const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_nb = rhs._nb;
	return (*this);
}

Fixed &Fixed::operator+(Fixed const & rhs)
{
	this->_nb += rhs._nb;
	return (*this);
}

Fixed &Fixed::operator-(Fixed const & rhs)
{
	this->_nb -= rhs._nb;
	return (*this);
}

Fixed &Fixed::operator*(Fixed const & rhs)
{
	this->_nb = (rhs.to_float() * this->to_float()) * pow(2, this->_nb_bits);
	return (*this);
}

Fixed &Fixed::operator/(Fixed const & rhs)
{
	this->_nb = (rhs.to_float() * this->to_float()) * pow(2, this->_nb_bits);
	return (*this);
}

Fixed &Fixed::operator++(int)
{
	this->_nb++;
	return (*this);
}

Fixed &Fixed::operator++()
{
	++this->_nb;
	return (*this);
}

Fixed &Fixed::operator--(int)
{
	this->_nb--;
	return (*this);
}

Fixed &Fixed::operator--()
{
	--this->_nb;
	return (*this);
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->_nb > rhs._nb);
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return (this->_nb < rhs._nb);
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
		return (this->_nb >= rhs._nb);
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_nb <= rhs._nb);
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->_nb == rhs._nb);
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->_nb != rhs._nb);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.to_float();
	return (o);
}
