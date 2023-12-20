/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:20:10 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/20 13:59:52 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTAP_CLASS_HPP
# define CLAPTAP_CLASS_HPP
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
		Claptrap & operator=(const Claptrap & rhs);
		void	attack(const std::string &target);
		void	take_dmg(unsigned int amount);
		void	be_repaired(unsigned int amount);
		int		get_hit_points() const;
		int		get_energy_points() const;
	private:
		std::string	_name;
		int		_hit_points;
		int		_energy_points;
		int		_attack_dmg;
};

#endif