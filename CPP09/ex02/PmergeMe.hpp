/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:45:08 by sammeuss          #+#    #+#             */
/*   Updated: 2024/03/01 11:39:53 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>
# include <limits>
# include <utility>
# include <ctime>
# include <cstring>

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &src);
		PmergeMe			&operator=(const PmergeMe &rhs);
		std::deque<int>		&get_deque();
		std::vector<int>	&get_vector();
		void				print_deque(std::deque<int>	&list) const;
		void				print_vector(std::vector<int>	&list) const;
		void				parse_args(char **av);
		void				merge_deque(std::deque<int>	&list);
		void				insert_deque(std::deque<int>	&res, std::deque<int>	&list);
		size_t				binary_search_dq(std::deque<int>	&list, int nb);
		void				merge_vector(std::vector<int>	&list);
		void				insert_vector(std::vector<int>	&res, std::vector<int>	&list);
		size_t				binary_search_vc(std::vector<int>	&list, int nb);
		bool				is_digit_only(std::string line) const;
		~PmergeMe();
	private:
		std::vector<int>	_vector_array;
		std::deque<int>		_deque_array;
};

class	BadInput : std::exception {
	public :
		const char*	what() const throw() {
			return ("bad input");
		};
};

#endif
