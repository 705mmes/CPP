/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_file.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:53:23 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/30 11:42:31 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEW_FILE_CLASS_HPP
# define NEW_FILE_CLASS_HPP
# include <iostream>
# include <fstream>
# include <string>
# include <vector>

using namespace std;

class New_file
{
	public:
		New_file(char* source, char* dest, char *input);
		~New_file();
		void	set_output(const char *ext);
		string	get_output() const;
		void	get_string(ifstream *source);
		void	replace();
		void	fill();
	private:
		string	_line;
		string 	_source;
		string 	_dest;
		string	_inputFile;
		string	_outputFile;
};

#endif