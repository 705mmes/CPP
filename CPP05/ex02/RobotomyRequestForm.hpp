/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:06:15 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/29 17:49:45 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.class.hpp"

/* Required grades: sign 72, exec 45
Makes some drilling noises. Then, informs that <target> has been robotomized
successfully 50% of the time. Otherwise, informs that the robotomy failed*/

class AForm;

class Robotomy : public AForm
{
	public:
		Robotomy();
		Robotomy(std::string target);
		Robotomy(Robotomy const &src);
		virtual ~Robotomy();
		virtual void	execute(Bureaucrat const &executor) const;
		Robotomy &operator=(Robotomy const &rhs);
	private:
		std::string _target;
};

#endif