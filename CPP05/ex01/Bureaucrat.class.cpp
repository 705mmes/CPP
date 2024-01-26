/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:11:10 by smunio            #+#    #+#             */
/*   Updated: 2024/01/26 14:59:11 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default Bureaucrat constructor called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name)
{
    try
    {
        if (grade > 150)
            throw GradeTooLowException();
        else if (grade < 1)
            throw GradeTooHighException();
        else
        {
            std::cout << "Default Bureaucrat constructor called" << std::endl;
            this->_grade = grade;
            return ;
        }
    }
    catch(const GradeTooHighException &e) {
        std::cerr << "Caught exception " << e.what() << std::endl;
        this->_grade = 150;
    }
    catch(const GradeTooLowException &e) {
        std::cerr << "Caught exception " << e.what() << std::endl;
        this->_grade = 150;
    }
    std::cout << "Default Bureaucrat constructor called" << std::endl;
    return ;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default Bureaucrat destructor called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    *this = src;
    return ;
}

Bureaucrat  const   &Bureaucrat::operator=(const    Bureaucrat  &rhs)
{
    if (this == &rhs)
        return (*this);
    this->_grade = rhs._grade;
    return (*this);
}

unsigned int Bureaucrat::get_grade() const
{
    return (this->_grade);
}

std::string Bureaucrat::get_name() const
{
    return (this->_name);
}

void    Bureaucrat::sign_form(Form &f) const
{
    std::cout << this->_name << " tries to sign " << f.get_name() << std::endl;
    f.be_signed(*this);
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.get_name() << " bureaucrat grade " << rhs.get_grade() << std::endl;
    return (o);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}
