/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:52:06 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/13 11:17:47 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <cmath>
# include <string>
# include <fstream>

using namespace std;

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

ostream &	operator<<(ostream & o, Fixed const & rhs);

#endif
