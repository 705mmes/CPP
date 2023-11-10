/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:51:02 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/10 12:49:49 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
# include <iostream>
# include <string>
# include "Contact.class.hpp"
# define SEARCH_TABLE1 " ___________________________________________\n|              Phonebook                    |"
# define SEARCH_TABLE2 "\n|-------------------------------------------|\n|index|Fname      |Lname       |nickname    |"
class	Phonebook
{	
	public :
		Phonebook();
		~Phonebook();
		int			exit;
		char		command;
		std::string	line;
		char		check_line() const;
		void		choose_command();
	private :
		Contact		Contact[8];
		int			c_index;
		int			nb_contact;
		void		add();
		void		ask_user();
		void		search() const;
		void		print_contact(int i) const;
		void 		print_phonebook() const;
		void		print_firstname(int i) const;
		void		print_lastname(int i) const;
		void		print_nickname(int i) const;
};

#endif