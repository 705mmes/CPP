/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong_cat.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:53:06 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/03 13:01:25 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_CLASS_HPP
# define WRONG_CAT_CLASS_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <cmath>
# include "Wrong_animal.class.hpp"

class Wrong_cat : public Wrong_animal
{
	public:
		Wrong_cat();
		Wrong_cat(Wrong_cat const &src);
		~Wrong_cat();
		Wrong_cat &operator=(Wrong_cat const &rhs);
};

#endif
