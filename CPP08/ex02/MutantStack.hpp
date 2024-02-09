/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:36:02 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/09 13:01:49 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <algorithm>
# include <stack>
# include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>() {
			return ;
		};
		MutantStack<T>(const MutantStack &src) : std::stack<T>(src) {};
		~MutantStack<T>() {
			return ;
		};
		MutantStack<T> &operator=(const MutantStack &rhs) {
			if (this == &rhs)
				return (*this);
			this->_stack = rhs._stack;
			return (*this);
		};

		typedef	typename std::stack<T>::container_type::iterator		iterator;
		typedef	typename std::stack<T>::container_type::const_iterator	const_iterator;

		iterator	begin() {return std::stack<T>::c.begin();};
		iterator	end() 	{return std::stack<T>::c.end();};
		const iterator begin() const {return std::stack<T>::c.begin();};
		const iterator end() const {return std::stack<T>::c.end();};
};

#endif
