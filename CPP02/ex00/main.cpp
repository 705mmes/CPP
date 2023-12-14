/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:42:15 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/09 11:28:43 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int main( void )
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;
	cout << a.get_raw_bits() << endl;
	cout << b.get_raw_bits() << endl;
	cout << c.get_raw_bits() << endl;
	return (0);
}
