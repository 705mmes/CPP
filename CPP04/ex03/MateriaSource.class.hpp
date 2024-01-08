/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:09:13 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/05 20:29:05 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP
# include <iostream>
# include "IMateriaSource.class.hpp"
# include "AMateria.class.hpp"

class IMateriaSource;
class AMateria;

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		~MateriaSource();
		virtual void learnMateria(AMateria *m);
		virtual AMateria* createMateria(std::string const &type);
		MateriaSource	&operator=(MateriaSource const &rhs);
	private:
		AMateria	*inventory[4];
};

#endif