/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:23:17 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/20 14:32:57 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.class.hpp"
#include "Scavtrap.class.hpp"
#include "Fragtrap.class.hpp"

int main()
{
	Fragtrap	me("sam");

	while (me.get_energy_points() > 0 && me.get_hit_points() > 0)
	{
		me.attack("leon");
		me.take_dmg(90);
		std::cout << "got " << me.get_hit_points() << " hit points left" << std::endl;
		me.be_repaired(2);
		std::cout << "got " << me.get_hit_points() << " hit points left" << std::endl;
	}
	me.high_five_guys();
	return (0);
}
