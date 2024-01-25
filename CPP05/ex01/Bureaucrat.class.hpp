/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:07:29 by smunio            #+#    #+#             */
/*   Updated: 2024/01/25 21:07:18 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP
# include <iostream>
# include <ostream>
# include <stdexcept>

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
std::ostream   &operator<<(std::ostream & o, Bureaucrat const &rhs);

class WrongGrade : public std::exception
{
    public:
        WrongGrade(unsigned int grade) : _grade(grade) {};
        virtual const char* what() const throw();
    private:
        unsigned int    _grade;
};

#endif
