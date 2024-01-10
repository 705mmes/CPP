/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:22:10 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/10 13:31:20 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP
# include <iostream>
# include "ICharacter.class.hpp"

class ICharacter;

class Character : public ICharacter
{
	public:
		Character(std::string name);
		~Character();
		Character(Character const &src);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		Character &operator=(Character const &rhs);
	private:
		std::string	_name;
		AMateria	*floor[100];
		AMateria	*inventory[4];
};

#endif