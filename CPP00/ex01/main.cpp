/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:50:30 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/09 19:36:40 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

int	main()
{
	Phonebook	instance;

	while (instance.exit == 0)
	{
		std::cin >> instance.line;
		instance.command = instance.check_line();
		if (instance.command != 0)
			instance.choose_command();
	}
	return (0);
}
