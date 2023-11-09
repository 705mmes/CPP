/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:51:11 by smunio            #+#    #+#             */
/*   Updated: 2023/11/09 13:21:09 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact()
{
	std::cout << "Contact constructor called" << std::endl;
	this->first_name = NULL;
	this->last_name = NULL;
	this->nickname = NULL;
	this->phone_number = NULL;
	this->darkest_secret = NULL;
	this->index = 0;
	this->nb_contact = 0;
	return ;
}

Contact::~Contact()
{
	std::cout << "Contact destructor called" << std::endl;
	return ;
}

void	Contact::set_contact(void)
{
	
}
