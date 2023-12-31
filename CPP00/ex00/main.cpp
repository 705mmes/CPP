/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:11:48 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/09 13:24:20 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i = -1;
	int	u = 0;

	if (ac < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	while (av[++u])
	{
		while (av[u][++i])
			std::cout << (char) toupper(av[u][i]);
		i = -1;
	}
	std::cout << std::endl;
	return (0);
}
