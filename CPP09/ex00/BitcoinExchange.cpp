/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:19:52 by sammeuss          #+#    #+#             */
/*   Updated: 2024/03/01 11:12:10 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Data::Data(std::string file_name) : _input_file(file_name)
{
	this->_csv_file = "data.csv";
	return ;
}

Data::Data(const Data &src)
{
	*this = src;
	return ;
}

Data	&Data::operator=(const Data &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_map = rhs._map;
	return (*this);
}

int	Data::fill_map(std::string file_name)
{
	std::ifstream input;
	input.open(file_name.c_str());
	if (!input.is_open())
	{
		std::cout << "Error: can't open csv file" << std::endl;
		return (1);
	}
	std::string line;
	while (std::getline(input, line))
	{
		std::istringstream iss(line);
		std::string date, value;
		std::getline(iss, date, ',');
        std::getline(iss, value, ',');
		double	r;
		std::istringstream(value) >> r;
		this->_map[date] = r;
	}
	input.close();
	std::map<std::string, double>::iterator	it = this->_map.begin();
	if (this->_map.size() == 1 && it->first == "date")
	{
		std::cout << "Error: csv file empty" << std::endl;
		return (1);
	}
	return (0);
}

void	Data::do_your_thing() const
{
	std::ifstream	input;
	input.open(this->_input_file.c_str());
	if (!input.is_open())
	{
		std::cout << "Error: can't open input file" << std::endl;
		return ;
	}
	std::string line;
	while (std::getline(input, line))
	{
		try {
			parse_input(line);
			print_result(line);
		}
		catch (const BadInput &e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
		catch (const BadNumber &e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	return ;
}

int	Data::parse_input(std::string line) const
{
	std::istringstream iss(line);
	std::string date, value;
	std::getline(iss, date, '|');
	std::getline(iss, value, '|');
	if (!strcmp(date.c_str(), "date "))
		return (0);
	if (parse_date(date)) {
		std::cout << date << " => ";
		throw BadInput();
	}
	if (atoi(value.c_str()) < 0 || atoi(value.c_str()) > 1000)
		throw BadNumber();
	return (0);
}

int	Data::parse_date(std::string line) const
{
	size_t		pos = 0;
	int 		date[3];
	int 		i = 0;
	std::string	delimiter = "-";

	for (int i = 0; line[i]; i++)
		if (!std::isdigit(line[i]) && line[i] != '-' && !std::isspace(line[i]))
			return (1);
	while ((pos = line.find(delimiter)) != std::string::npos) {
		date[i] = atoi(line.substr(0, pos).c_str());
		line.erase(0, pos + delimiter.length());
		i++;
	}
	date[i] = atoi(line.c_str());
	if (!date_is_valid(date[0], date[1], date[2]))
		return (1);
	return (0);
}

bool	Data::date_is_valid(int y, int m, int d) const
{
	if (y < 2010 || y > 2024 || m < 1 || m > 12 || d < 1 || d > 31)
		return (false);
	return (true);
}

void Data::print_result(std::string line) const
{
	// this->print_map();
	std::istringstream iss(line);
	std::string date, value;
	std::getline(iss, date, '|');
	if (!strcmp(date.c_str(), "date "))
		return ;
	std::getline(iss, value, '|');
	std::map<std::string, double>::const_iterator iter = this->_map.find(date);
	std::cout << std::fixed << std::setprecision(2);
	if (iter == this->_map.end())
		iter = this->_map.lower_bound(date);
	if (!iter->second)
	{
		std::cerr << "Error: no value for this date" << std::endl;
		return ;
	}
	std::cout << date << " => " << value << " = " << iter->second * atof(value.c_str()) << std::endl;
	return ;
}

std::string	Data::get_csv() const
{
	return (this->_csv_file);
}

void	Data::print_map() const
{
	std::map<std::string, double>::const_iterator iter;
    for (iter = this->_map.begin(); iter != this->_map.end(); ++iter)
        std::cout << "Key: " << iter->first << ", Value: " << iter->second << std::endl;
}

Data::~Data()
{
	return ;
}

const	char*	BadInput::what() const throw()
{
	return ("bad input");
}

const	char*	BadNumber::what() const throw()
{
	return ("number is too large or negative");
}
