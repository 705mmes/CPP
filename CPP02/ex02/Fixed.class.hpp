/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:20:42 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/20 13:35:04 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <cmath>
# include <string>
# include <fstream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const	Fixed &src);
		Fixed(const int nb);
		Fixed(const float nb);
//functions
		float	to_float(void) const;
		int		to_int(void) const;
		int		get_raw_bits(void) const;
		int		set_raw_bits(int const raw);
		static	Fixed	min(Fixed &x, Fixed &y);
		static	Fixed	min(const Fixed &x, const Fixed &y);
		static	Fixed 	max(Fixed &x, Fixed &y);
		static	Fixed  	max(const Fixed &x, const Fixed &y);
//operators
		Fixed &	operator=(Fixed const & rhs);
		Fixed &	operator+(Fixed const & rhs);
		Fixed &	operator-(Fixed const & rhs);
		Fixed &	operator*(Fixed const & rhs);
		Fixed &	operator/(Fixed const & rhs);
		Fixed &	operator++(int);
		Fixed &	operator++();
		Fixed &	operator--(int);
		Fixed &	operator--();
		bool 	operator>(Fixed const & rhs) const;
		bool 	operator<(Fixed const & rhs) const;
		bool 	operator>=(Fixed const & rhs) const;
		bool 	operator<=(Fixed const & rhs) const;
		bool 	operator==(Fixed const & rhs) const;
		bool 	operator!=(Fixed const & rhs) const;
	private:
		int			_nb;
		static const int	_nb_bits;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif