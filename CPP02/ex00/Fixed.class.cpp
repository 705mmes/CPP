/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:42:06 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/20 13:32:13 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_nb_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_nb = 42;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

int	Fixed::set_raw_bits(int const raw)
{
	this->_nb = raw;
	return (0);
}

int	Fixed::get_raw_bits(void) const
{
	std::cout << "get_raw_bits called" << std::endl;
	return (this->_nb);
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_nb = rhs._nb;
	return (*this);
}
