/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:40:28 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/05 11:26:15 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template <typename T>
void	swap(T &x, T &y) {
	T	tmp = x;
	x = y;
	y = tmp;
	return ;
};

template <typename T>
T const &min(T const &x, T const &y) {
	return ((x<y) ? x : y);
};

template <typename T>
T const &max(T const &x, T const &y) {
	return ((x>y) ? x : y);
};
#endif
