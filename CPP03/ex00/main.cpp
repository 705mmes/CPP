/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:20:05 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/20 13:45:04 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.class.hpp"

int main()
{
	Claptrap	me("sam");

	while (me.get_energy_points() > 0)
	{
		me.attack("leon");
		me.take_dmg(4);
		std::cout << "got " << me.get_hit_points() << " hit points left" << std::endl;
		me.be_repaired(2);
		std::cout << "got " << me.get_hit_points() << " hit points left" << std::endl;
	}
	return (0);
}
