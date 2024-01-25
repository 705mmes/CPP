/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:23:10 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/11 13:00:17 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP
# include <iostream>
# include <fstream>
# include <cmath>
# include <string>

class	Claptrap
{
	public:
		Claptrap();
		Claptrap(std::string name);
		Claptrap(const Claptrap &src);
		~Claptrap();
		virtual void	attack(const std::string &target);
		void	take_dmg(unsigned int amount);
		void	be_repaired(unsigned int amount);
		int		get_hit_points() const;
		int		get_energy_points() const;
		Claptrap & operator=(const Claptrap & rhs);
		std::string	get_name() const;
	protected:
		std::string	_name;
		int		_hit_points;
		int		_energy_points;
		int		_attack_dmg;
};

#endif