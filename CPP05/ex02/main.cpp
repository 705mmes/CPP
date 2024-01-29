/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:46:36 by smunio            #+#    #+#             */
/*   Updated: 2024/01/29 18:36:37 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

int main(void)
{
    std::srand(static_cast<unsigned int>(std::time(0)));
    Bureaucrat me("sam", 1);
    std::cout << me;

    AForm   *shrub = new Shrubbery("apt 11a first chamber right");
    AForm   *robo = new Robotomy("leon");
    AForm   *pardon = new Presidential("One nazi");

    // me.sign_form(*shrub);
    // me.executeForm(*shrub);

    me.sign_form(*robo);
    me.executeForm(*robo);

    // me.sign_form(*pardon);
    // me.executeForm(*pardon);

    delete shrub;
    delete robo;
    delete pardon;
    
    return (0);
}
