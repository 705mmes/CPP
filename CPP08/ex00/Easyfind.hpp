/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:16:27 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/07 14:23:06 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

class NothingException : public std::exception {
	public:
		const char*	what() const throw() {
			return ("Found nothing");
		};
};

template<typename T>
void	easyfind(std::vector<T> &tab, int nb) {
	typename std::vector<T>::const_iterator it = std::find(tab.begin(), tab.end(), nb);
    if (it != tab.end())
        std::cout << *it << std::endl;
	else
        throw NothingException();
};


#endif