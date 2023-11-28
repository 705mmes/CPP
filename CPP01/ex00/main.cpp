/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:18:15 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/24 14:15:07 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*myZombie;

	randomChump("Bob");
	myZombie = newZombie("zombie");
	myZombie->announce();
	delete myZombie;
	return (0);
}
