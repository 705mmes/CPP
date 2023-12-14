/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:23:11 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/13 16:17:38 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP
# include "Claptrap.class.hpp"
# include <iostream>
# include <fstream>
# include <cmath>
# include <string>

using namespace std;

class Scavtrap : public Claptrap 
{
	public:
		Scavtrap();
		Scavtrap(string name);
		Scavtrap(const Scavtrap &src);
		~Scavtrap();
		Scavtrap & operator=(const Scavtrap & rhs);
		void	attack(string target);
		void	guard_guate();
};

#endif
