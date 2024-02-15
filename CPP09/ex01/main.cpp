/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:57:20 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/15 11:37:21 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "Wrong args amount\n", 1);
	RPN	*data = new RPN(av[1]);
	try {
		data->do_your_thing();
		std::cout << "result = " << data->get_result() << std::endl;
	}
	catch (const SyntaxException &e) {
		std::cerr << e.what() << std::endl;
	}
	delete data;
	return (0);
}
