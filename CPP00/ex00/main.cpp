/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:11:48 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/08 15:33:14 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 2)
	{
		std::cout << "Wrong amount of args" << std::endl;
		return (1);
	}
	return (0);
}