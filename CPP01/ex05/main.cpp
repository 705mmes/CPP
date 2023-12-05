/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:56:21 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/05 12:35:12 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

int main()
{
	Harl	Harl;
	string str;
	cout << "What yo want : ";
	cin >> str;
	while (str != "DEBUG" && str != "INFO" && str != "WARNING" && str != "ERROR")
	{
		cout << "Try again mon :";
		cin >> str;
	}
	
	Harl.complain(str);
	return (0);
}
