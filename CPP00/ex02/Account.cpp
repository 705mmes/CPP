/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:29:26 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/15 11:36:26 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
using namespace std;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals= 0;

Account::Account (int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << endl;
	return ;
}

Account::~Account()
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << endl;
	return ;
}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" <<
			_totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << endl;
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp()
{
	time_t	t = time(nullptr);
	std::cout << "[" << t << "] ";
}

void	Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_totalNbDeposits++;
	this->_nbDeposits++;
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:"
			<< deposit << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits	<< endl;
	this->_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";";
	if (withdrawal > this->_amount)
		cout << "withdrawal:refused" << endl;
	else
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		cout << "withdrawal:" << withdrawal << ";amount:" << this->_amount
			<< ";nb_withdrawals:" << this->_nbWithdrawals << endl;
 	}
	return (true);
}

int	Account::checkAmount() const
{
	return (0);
}

void	Account::displayStatus () const
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:"
			<< this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals	<< endl;

}
