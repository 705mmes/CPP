/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:21:10 by sammeuss          #+#    #+#             */
/*   Updated: 2024/03/01 10:39:30 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_CPP
# define BITCOINEXCHANGE_CPP
# include <iostream>
# include <fstream>
# include <cstring>
# include <string>
# include <map>
# include <iomanip>
# include <algorithm>
# include <sstream>
# include <ctime>

class Data
{
	public:
		Data(std::string file_name);
		Data(const Data &src);
		Data &operator=(const Data &rhs);
		int	fill_map(std::string file_name);
		std::string	get_csv()	const;
		void	print_map()	const;
		void	do_your_thing() const;
		int		parse_input(std::string line) const;
		void	print_result(std::string line) const;
		int		parse_date(std::string line) const;
		bool	date_is_valid(int y, int m, int d) const;
		~Data();
	private:
		std::string	_csv_file;
		std::string	_input_file;
		std::map<std::string, double> _map;
};

class BadInput : public std::exception {
	public:
		const char*	what() const throw();
};

class BadNumber : public std::exception {
	public:
		const char*	what() const throw();
};
#endif