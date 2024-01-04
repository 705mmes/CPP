/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:15:40 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/03 12:57:02 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <cmath>
# include "Animal.class.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &src);
		virtual ~Cat();
		Cat & operator=(Cat const &rhs);
		void	make_sound() const;
};

#endif
