/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:51:11 by smunio            #+#    #+#             */
/*   Updated: 2023/11/09 23:19:14 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact()
{
	std::cout << "Contact constructor called" << std::endl;
	nb = 0;
	return ;
}

Contact::~Contact()
{
	std::cout << "Contact destructor called" << std::endl;
	return ;
}
