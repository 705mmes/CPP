/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:56:13 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/05 12:34:29 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"
	
Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void	Harl::debug()
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
	return ;
}

void	Harl::info()
{
	cout << "I cannot believe adding extra bacon costs more money. You didn t put enough bacon in my burger! If you did, I wouldn t be asking for more!" << endl;
	return ;
}

void	Harl::warning()
{
	cout << "I think I deserve to have some extra bacon for free. I ve been coming for years whereas you started working here since last month." << endl;
	return ;
}

void	Harl::error()
{
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
	return ;
}

void	Harl::complain(string level)
{
	void (Harl::*functptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	string		str_tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (str_tab[i] == level)
			(this->*functptr[i])();
	}
	return ;
}