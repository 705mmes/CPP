/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:07:29 by smunio            #+#    #+#             */
/*   Updated: 2024/01/25 12:05:07 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP
# include <iostream>
# include <ostream>

class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, unsigned int grade);
        Bureaucrat(const Bureaucrat &src);
        ~Bureaucrat();
        Bureaucrat  const   &operator=(const Bureaucrat  &rhs);
        const   std::string get_name() const;
        unsigned int    get_grade() const;
    private:
        const std::string _name;
        unsigned    int _grade;
};
std::ostream const   &operator<<(std::ostream & o, Bureaucrat  &rhs);

#endif
