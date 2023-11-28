/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:55:51 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/24 15:55:26 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *horde;
	
	horde = zombieHorde(3, "sam");
	for (int i = 0; i < 3; i++)
	{
		horde[i].announce();
	}
	//The delete[] keyword deletes the array pointed by the given pointer. 
	delete [] horde;
	return (0);
}