/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:57:24 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/04 14:40:02 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <cmath>

class Aanimal
{
	public:
		Aanimal();
		Aanimal(Aanimal const &src);
		virtual ~Aanimal();
		Aanimal & operator=(Aanimal const &rhs);
		virtual void	make_sound() const = 0;
		std::string			get_type() const;
	protected:
		std::string	_type;
};

#endif