/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:22:59 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/05 20:44:00 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP
# include <iostream>
# include "ICharacter.class.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(const std::string &type);
		~AMateria();
		std::string const &getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void use(ICharacter	&target);
	protected:
		std::string	_type;
};

#endif
