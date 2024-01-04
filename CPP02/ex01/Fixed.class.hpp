/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:52:06 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/03 12:55:01 by sammeuss         ###   ########.fr       */
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
		float	to_float(void) const;
		int		to_int(void) const;
		int	get_raw_bits(void) const;
		int	set_raw_bits(int const raw);
		Fixed &	operator=(Fixed const & rhs);
	private:
		int	_nb;
		static const int	_nb_bits;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
