/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:23:10 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/13 15:56:00 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP
# include <iostream>
# include <fstream>
# include <cmath>
# include <string>

using namespace std;

class	Claptrap
{
	public:
		Claptrap();
		Claptrap(string name);
		Claptrap(const Claptrap &src);
		~Claptrap();
		void	attack(const string &target);
		void	take_dmg(unsigned int amount);
		void	be_repaired(unsigned int amount);
		int		get_hit_points() const;
		int		get_energy_points() const;
		Claptrap & operator=(const Claptrap & rhs);
	protected:
		string	_name;
		int		_hit_points;
		int		_energy_points;
		int		_attack_dmg;
};

#endif