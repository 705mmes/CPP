/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:23:11 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/20 13:47:48 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP
# include "Claptrap.class.hpp"
# include <iostream>
# include <fstream>
# include <cmath>
# include <string>

class Scavtrap : public Claptrap 
{
	public:
		Scavtrap();
		Scavtrap(std::string name);
		Scavtrap(const Scavtrap &src);
		~Scavtrap();
		Scavtrap & operator=(const Scavtrap & rhs);
		void	attack(std::string target);
		void	guard_guate();
};

#endif
