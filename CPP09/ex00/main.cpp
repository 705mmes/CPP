/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:20:20 by sammeuss          #+#    #+#             */
/*   Updated: 2024/03/01 10:40:03 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "Wrong arguments amount\n", 1);
	Data	*data = new Data(av[1]);
	if (data->fill_map(data->get_csv()) == 1)
		return (1);
	data->do_your_thing();
	delete data;
	return (0);
}