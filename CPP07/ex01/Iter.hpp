/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:28:25 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/05 12:33:23 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T> 
void	iter(const T *array, int len, void (*funct)(const T&)) {
	for (int i = 0; i < len; i++)
		funct(array[i]);
};

template <typename T>
void	print(const T &obj) {
	std::cout << obj << '\n';
};

#endif