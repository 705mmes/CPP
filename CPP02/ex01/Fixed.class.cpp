/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:52:00 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/03 12:55:16 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_nb_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_nb = src._nb;
	return ;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nb = nb * pow(2, 8) + 0.5;
	return ;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_nb = nb * pow(2, 8) + 0.5;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

float	Fixed::to_float() const
{
	return(this->_nb / pow(2, 8));
}

int		Fixed::to_int() const
{
	return ((roundf(this->_nb / pow(2, 8))));
}

int	Fixed::set_raw_bits(int const raw)
{
	this->_nb = raw;
	return (0);
}

int	Fixed::get_raw_bits(void) const
{
	return (this->_nb);
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	this->_nb = rhs._nb;
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << static_cast<float>(rhs.get_raw_bits() / pow(2, 8));
	return (o);
}
