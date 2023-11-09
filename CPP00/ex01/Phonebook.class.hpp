/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:51:02 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/09 13:41:30 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

class	Phonebook
{	
	public :
		Phonebook();
		~Phonebook();
		int		exit;
		char	*line;
	private :
		Contact	tab[8];
};