/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:23:17 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/13 16:09:00 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.class.hpp"
#include "Scavtrap.class.hpp"

int main()
{
	Scavtrap	me("sam");

	while (me.get_energy_points() > 0 && me.get_hit_points() > 0)
	{
		me.attack("leon");
		me.take_dmg(100);
		cout << "got " << me.get_hit_points() << " hit points left" << endl;
		me.be_repaired(2);
		cout << "got " << me.get_hit_points() << " hit points left" << endl;
	}
	return (0);
}
