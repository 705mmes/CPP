/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:42:08 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/20 13:27:22 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>


class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &src);
		Fixed &operator=(Fixed const & rhs);
		int	get_raw_bits(void) const;
		int	set_raw_bits(int const raw);
	private:
		int					_nb;
		static const int	_nb_bits;
};

#endif