/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   New_file.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:53:23 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/03 12:50:53 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEW_FILE_CLASS_HPP
# define NEW_FILE_CLASS_HPP
# include <iostream>
# include <fstream>
# include <string>
# include <vector>

class New_file
{
	public:
		New_file(char* source, char* dest, char *input);
		~New_file();
		void	set_output(const char *ext);
		std::string	get_output() const;
		void	get_string(std::ifstream *source);
		void	replace();
		void	fill();
	private:
		std::string	_line;
		std::string 	_source;
		std::string 	_dest;
		std::string	_inputFile;
		std::string	_outputFile;
};

#endif