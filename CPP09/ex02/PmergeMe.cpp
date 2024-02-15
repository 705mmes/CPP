/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:41:57 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/15 11:51:01 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::cout << "Default PmergeMe constructor called" << std::endl;
	return ;
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
 	std::cout << "Copy PmergeMe constructor called" << std::endl;
 	*this = src;
	return ;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

PmergeMe::~PmergeMe()
{
	std::cout << "Default PmergeMe destructor called" << std::endl;
	return ;
}