/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:14:38 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/10 11:41:29 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP
# include <iostream>
# include "AMateria.class.hpp"

class AMateria;

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &src);
		virtual ~Ice();
		std::string const &getType() const;
		virtual AMateria	*clone() const;
		Ice	&operator=(Ice const &rhs);
};

#endif