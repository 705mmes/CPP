/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:50:30 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/09 13:47:45 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

int	main()
{
	Phonebook	instance;
	
	while (instance.exit == 0)
	{
		std::cin >> instance.line;
		std::cout << "line =" << instance.line;
		instance.exit = 1;
	}
}