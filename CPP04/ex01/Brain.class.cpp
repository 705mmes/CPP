/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:46:23 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/15 14:49:35 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain::Brain()
{
	cout << "Brain constructor called" << endl;
	return ;
}

Brain::Brain(Brain const &src)
{
	cout << "Brain copy constructor called" << endl;
	return ;
}

Brain::~Brain()
{
	cout << "Brain destructor called" << endl;
	return ;
}

Brain &Brain::operator=(Brain const &rhs)
{
	return (*this);
}