/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:41:57 by sammeuss          #+#    #+#             */
/*   Updated: 2024/03/01 11:42:58 by smunio           ###   ########.fr       */
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

std::deque<int>	&PmergeMe::get_deque()
{	
	return (this->_deque_array);
}

std::vector<int>	&PmergeMe::get_vector()
{
	return (this->_vector_array);
}

void	PmergeMe::parse_args(char **av)
{
	int tmp;
	for (int i = 1; av[i]; i++)
	{	
		if (!this->is_digit_only(av[i]))
			throw BadInput();
		tmp = atoi(av[i]);
		if (tmp > 2147483647 || tmp < -2147483648 || (tmp == -1 && std::strcmp(av[i], "-1")))
			throw BadInput();
		this->_deque_array.push_back(tmp);
		this->_vector_array.push_back(tmp);
	}
}

void	PmergeMe::print_deque(std::deque<int>	&list) const
{
	for(size_t i = 0; i < list.size(); i++)
		std::cout << list[i] << " ";
	std::cout << std::endl;
	return ;
}

void	PmergeMe::print_vector(std::vector<int>	&list) const
{
	for(size_t i = 0; i < list.size(); i++)
		std::cout << list[i] << " ";
	std::cout << std::endl;
	return ;
}

void	PmergeMe::merge_deque(std::deque<int> &list)
{
	if (list.size() == 2 && list[0] > list[1])
		std::swap(list[0], list[1]);
	if (list.size() == 1 || list.size() == 2)
		return ;
	std::deque<int> res;
	for (size_t i = 0; (i + 1) < list.size(); i += 2) {
		if (list[i] > list[i + 1]) {
			std::swap(list[i], list[i + 1]);
		}
	}
	for (size_t i = 0; (i + 1) < list.size(); i += 2) {
		if (i == list.size() - 1)
			res.push_back(list[i]);
		else if (list[i + 1])
			res.push_back(list[i + 1]);
	}
	this->merge_deque(res);
	this->insert_deque(res, list);
	list = res;
	return ;
}

void	PmergeMe::insert_deque(std::deque<int>	&res, std::deque<int>	&list)
{
	std::deque<int>::iterator	it = res.begin();
	size_t index;
	for (size_t i = 0; (i) < list.size(); i += 2) {
		index = this->binary_search_dq(res, list[i]);
		res.insert(it + index, list[i]);
		it = res.begin();
	}
	return ;
}

size_t	PmergeMe::binary_search_dq(std::deque<int>	&list, int nb)
{
	size_t l = 0;
	size_t h = list.size() - 1;
	size_t mid = l + (h - l) / 2;
	if (nb < list[0])
		return (0);
	else if (nb > list[list.size() - 1])
		return (list.size());
	while (1)
	{
		mid = l + (h - l) / 2;
		if (list[mid] <= nb)
			l = mid + 1;
		else if (list[mid] > nb)
			h = mid;
		if (h == mid && l == mid)
			break ;
	}
	return (mid);
}

void	PmergeMe::merge_vector(std::vector<int> &list)
{
	if (list.size() == 2 && list[0] > list[1])
		std::swap(list[0], list[1]);
	if (list.size() == 1 || list.size() == 2)
		return ;
	std::vector<int> res;
	for (size_t i = 0; (i + 1) < list.size(); i += 2) {
		if (list[i] > list[i + 1]) {
			std::swap(list[i], list[i + 1]);
		}
	}
	for (size_t i = 0; (i + 1) < list.size(); i += 2) {
		if (i == list.size() - 1)
			res.push_back(list[i]);
		else if (list[i + 1])
			res.push_back(list[i + 1]);
	}
	this->merge_vector(res);
	this->insert_vector(res, list);
	list = res;
	return ;
}

void	PmergeMe::insert_vector(std::vector<int>	&res, std::vector<int>	&list)
{
	std::vector<int>::iterator	it = res.begin();
	size_t index;
	for (size_t i = 0; (i) < list.size(); i += 2) {
		index = this->binary_search_vc(res, list[i]);
		res.insert(it + index, list[i]);
		it = res.begin();
	}
	return ;
}

size_t	PmergeMe::binary_search_vc(std::vector<int>	&list, int nb)
{
	size_t l = 0;
	size_t h = list.size() - 1;
	size_t mid = l + (h - l) / 2;
	if (nb < list[0])
		return (0);
	else if (nb > list[list.size() - 1])
		return (list.size());
	while (1)
	{
		mid = l + (h - l) / 2;
		if (list[mid] <= nb)
			l = mid + 1;
		else if (list[mid] > nb)
			h = mid;
		if (h == mid && l == mid)
			break ;
	}
	return (mid);
}

bool PmergeMe::is_digit_only(std::string line) const
{
	for (int i = 0; line[i]; i++)
		if (!isdigit(line[i]))
			return (false);
	return (true);
}
