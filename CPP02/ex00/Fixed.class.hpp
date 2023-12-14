/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:42:08 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/13 11:16:42 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>

using namespace std;

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &src);
		int	get_raw_bits(void) const;
		int	set_raw_bits(int const raw);
	private:
		int					_nb;
		static const int	_nb_bits;
};
Fixed &	operator=(Fixed const & rhs);

#endif