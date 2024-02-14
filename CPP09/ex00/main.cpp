/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:20:20 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/14 13:49:45 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "Wrong arguments amount\n", 1);
	Data	*data = new Data(av[1]);
	data->fill_map(data->get_csv());
	data->do_your_thing();
	delete data;
	return (0);
}