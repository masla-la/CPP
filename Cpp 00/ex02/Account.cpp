/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masla-la <masla-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:22:55 by masla-la          #+#    #+#             */
/*   Updated: 2023/08/03 12:02:22 by masla-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
}

Account::Account(int deposit)
{
	this->_accountIndex = getNbAccounts();
	this->_amount = deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << deposit; 
	std::cout << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount += deposit;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t	time;
	std::tm		time2;


	time = std::time(NULL);
	time2 = *std::localtime(&time);
	std::cout << "[";
	std::cout << time2.tm_year + 1900;
	std::cout << std::setfill('0');
	std::cout << std::setw(2) << time2.tm_mon + 1;
	std::cout << std::setw(2) << time2.tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << time2.tm_hour;
	std::cout << std::setw(2) << time2.tm_min;
	std::cout << std::setw(2) << time2.tm_sec;
	std::cout << "]";
}

void	Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
	_totalAmount += deposit;
	_nbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (this->_amount - withdrawal < 0)
	{
		std::cout << ";withdrawal:refuse" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	return (true);
}

int		Account::checkAmount(void) const
{
	return (0);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawal:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " Acounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits" << getNbDeposits();
	std::cout << ";withdrawals:"<< getNbWithdrawals();
	std::cout << std::endl;
}
