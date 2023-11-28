/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:01:28 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/28 16:22:24 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

using namespace std;

class	HumanB
{
	public:
		HumanB(string name);
		~HumanB();
		void	attack() const;
		void	setWeapon(Weapon &weapon);
	private:
		string	_name;
		Weapon	*_weapon;
};

#endif