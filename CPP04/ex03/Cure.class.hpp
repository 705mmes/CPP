/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:16:22 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/05 20:25:22 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP
# include <iostream>
# include "AMateria.class.hpp"

class AMateria;

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &src);
		~Cure();
		std::string const &getType() const;
		virtual AMateria	*clone() const;
		Cure	&operator=(Cure const &rhs);
};

#endif