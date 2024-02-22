/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:42:00 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/20 14:50:05 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	clock_t				_vector_time;
	clock_t				_deque_time;
	PmergeMe	me;
	try {
		me.parse_args(av);
		std::cout << "before: ";
		// me.print_deque(me.get_deque());
		me.print_vector(me.get_vector());
		_vector_time = clock();
		me.merge_vector(me.get_vector());
		_vector_time = clock() - _vector_time;
		_deque_time = clock();
		me.merge_deque(me.get_deque());
		_deque_time = clock() - _deque_time;
		std::cout << "after: ";
		me.print_vector(me.get_vector());
		// me.print_deque(me.get_deque());
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque: " << static_cast<double>(_deque_time * CLOCKS_PER_SEC / 1000000) << " us" << std::endl;
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector: " << static_cast<double>(_vector_time * CLOCKS_PER_SEC / 1000000) << " us" << std::endl;
	}
	catch (const BadInput &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}
	return (0);
}