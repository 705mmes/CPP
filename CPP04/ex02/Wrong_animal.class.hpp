/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong_animal.class.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:52:08 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/03 13:01:21 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_CLASS_HPP
# define WRONG_ANIMAL_CLASS_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <cmath>

class Wrong_animal
{
	public:
		Wrong_animal();
		Wrong_animal(Wrong_animal const &src);
		~Wrong_animal();
		Wrong_animal &operator=(Wrong_animal const &rhs);
		void	make_sound() const;
	protected:
		std::string	_type;
};

#endif
