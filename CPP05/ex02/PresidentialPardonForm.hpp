/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:04:56 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/29 17:44:23 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.class.hpp"

/*Required grades: sign 25, exec 5
Informs that <target> has been pardoned by Zaphod Beeblebrox.*/

class AForm;

class Presidential : public AForm
{
	public:
		Presidential();
		Presidential(std::string target);
		Presidential(Presidential const &src);
		virtual ~Presidential();
		virtual void	execute(Bureaucrat const &executor) const;
		Presidential &operator=(Presidential const &rhs);
	private:
		std::string _target;
};

#endif