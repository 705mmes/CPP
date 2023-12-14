/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:52:00 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/13 11:17:19 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_nb_bits = 8;

Fixed::Fixed()
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
	this->_nb = nb * pow(2, 8) + 0.5;
	return ;
}

Fixed::Fixed(const float nb)
{
	cout << "Float constructor called" << endl;
	this->_nb = nb * pow(2, 8) + 0.5;
	return ;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
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

ostream &	operator<<(ostream & o, Fixed const & rhs)
{
	o << static_cast<float>(rhs.get_raw_bits() / pow(2, 8));
	return (o);
}
