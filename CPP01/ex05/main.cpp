/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:56:21 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/03 12:54:23 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

int main()
{
	Harl	Harl;
	std::string str;
	std::cout << "What yo want : ";
	std::cin >> str;
	while (str != "DEBUG" && str != "INFO" && str != "WARNING" && str != "ERROR")
	{
		std::cout << "Try again mon :";
		std::cin >> str;
	}
	
	Harl.complain(str);
	return (0);
}
