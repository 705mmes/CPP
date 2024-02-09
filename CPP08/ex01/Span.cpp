/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:59:11 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/09 10:24:19 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout << "Default Span constructor called" << std::endl;
	return ;
}

Span::Span(unsigned int n) : _max(n)
{
	this->_tab.reserve(n);
	std::cout << "Default Span constructor called" << std::endl;
	return ;
}

Span::Span(const Span &src)
{
	std::cout << "Default Span copy constructor called" << std::endl;
	*this = src;
	return ;
}

Span	&Span::operator=(const Span &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

Span::~Span()
{
	std::cout << "Default Span destructor called" << std::endl;
	return ;
}

void	Span::print_vector()
{
	for (std::vector<int>::const_iterator	it = this->_tab.begin();
			it != this->_tab.end(); it++)
			std::cout << *it << std::endl;
	return ;
}

void	Span::addNumber(int nb)
{
	try
	{
		this->_tab.push_back(nb);
		if (this->_max >= this->_tab.size())
			throw NoSpaceException();
	}
	catch (NoSpaceException &e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
}

void	Span::addNumbers(int nb, int count)
{
	this->_tab.assign(count, nb);
	return ;
}

int	Span::longestSpan()
{
	std::vector<int>::const_iterator	it_min = std::min_element(this->_tab.begin(), this->_tab.end());
	std::vector<int>::const_iterator	it_max = std::max_element(this->_tab.begin(), this->_tab.end());

	return (*it_max - *it_min);
}

int Span::shortestSpan()
{
	int r = 0;
	int span;
	std::vector<int>::const_iterator	it = this->_tab.begin();
	std::sort(this->_tab.begin(), this->_tab.end());
	if (it + 1 != this->_tab.end())
		span = *(it + 1) - *it;
	else
	{
		std::cerr << "Only have one object" << std::endl;
		return (0);
	}
	while (it != this->_tab.end())
	{
		if (it + 1 != this->_tab.end())
		{
			if (span < *(it + 1) - *it)
				r = span;
			span = *(it + 1) - *it;
		}
		it++;
	}
	return (r);
}
