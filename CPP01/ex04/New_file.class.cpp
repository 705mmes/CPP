/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   New_file.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:53:11 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/08 11:59:38 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "New_file.class.hpp"

New_file::New_file(char* source, char* dest, char *input) : _source(source), _dest(dest), _inputFile(input)
{
	return ;
}

New_file::~New_file()
{
	return ;
}

void	New_file::set_output(const char *ext)
{
	this->_outputFile = this->_inputFile + ext;
}

std::string New_file::get_output() const
{
	return (this->_outputFile);
}

void	New_file::get_string(std::ifstream *source)
{
	std::string buff;

	std::getline(*source, buff);
	while (*source)
	{
		this->_line += buff;
		this->_line += "\n";
		this->replace();
		std::getline(*source, buff);
	}
	this->fill();
	return ;
}

void	New_file::replace()
{
	for (int flag = this->_line.find(this->_source); flag >= 0; flag = this->_line.find(this->_source, flag + this->_dest.length()))
    {
        this->_line.erase(flag, this->_source.length());
        this->_line.insert(flag, this->_dest);
    }
}

void	New_file::fill()
{
	std::ofstream outputFile(this->get_output());

	if (!outputFile.is_open())
		return ((void)(std::cerr << "Can't open dest file" << std::endl));
	outputFile << this->_line;
	outputFile.close();
}
