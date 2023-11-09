/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:51:02 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/09 23:08:49 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
# include <iostream>
# include <string>
# include "Contact.class.hpp"

class	Phonebook
{	
	public :
		Phonebook();
		~Phonebook();
		int			nb_contact;
		int			c_index;
		int			exit;
		char		command;
		std::string	line;
		char		check_line() const;
		void		choose_command();
	private :
		void		add();
		void		search() const;
		void		ask_user();
		void		print_contact(int i) const;
		void 		print_phonebook() const;
		Contact		Contact[8];
};

#endif