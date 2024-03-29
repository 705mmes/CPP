/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:22:59 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/10 11:40:45 by smunio           ###   ########.fr       */
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
		virtual ~AMateria();
		std::string const &getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void use(ICharacter	&target);
	protected:
		std::string	_type;
};

#endif
