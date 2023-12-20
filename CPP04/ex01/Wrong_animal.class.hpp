/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong_animal.class.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:52:08 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/15 14:19:19 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_CLASS_HPP
# define WRONG_ANIMAL_CLASS_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <cmath>

using namespace std;

class Wrong_animal
{
	public:
		Wrong_animal();
		Wrong_animal(Wrong_animal const &src);
		~Wrong_animal();
		Wrong_animal &operator=(Wrong_animal const &rhs);
		void	make_sound() const;
	protected:
		string	_type;
};

#endif
