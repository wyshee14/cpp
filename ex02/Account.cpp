/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 13:20:43 by wshee             #+#    #+#             */
/*   Updated: 2025/10/11 17:38:21 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <ctime>
# include <iostream>
# include <iomanip>

// Define static member variables outside the class
// Because they are not belong to any objects
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << initial_deposit << ";created\n";
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

int Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int Account::getTotalAmount( void )
{
	return _totalAmount;
}

int Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void Account::_displayTimestamp( void )
{
	time_t now = time(NULL);
	tm *lct = localtime(&now);
	std::cout << '['
		<< (1900 + lct->tm_year)
		<< std::setw(2) << std::setfill('0') << (lct->tm_mon + 1)
		<< std::setw(2) << std::setfill('0') << (lct->tm_mday)
		<< '_'
		<< std::setw(2) << std::setfill('0') << lct->tm_hour
		<< std::setw(2) << std::setfill('0') << lct->tm_min
		<< std::setw(2) << std::setfill('0') << lct->tm_sec
		<< ']';
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals
		<< std::endl;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals()
		<< std::endl;
}

void Account::makeDeposit(int deposit)
{
	int p_amount = checkAmount();
	_amount += deposit;
	_nbDeposits++;

	_displayTimestamp();
	std::cout << " index:" << _accountIndex
		<< ";p_amount:" << p_amount
		<< ";deposit:" << deposit
		<< ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits
		<< std::endl;

	_totalNbDeposits++;
	_totalAmount += deposit;
}

int Account::checkAmount( void ) const
{
	return _amount;
}

bool Account::makeWithdrawal( int withdrawal )
{
	int balance = checkAmount();

	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << balance;
	// Check the balance is larger than withdrawal
	if (balance < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}

	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << _amount
	<< ";nb_withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
	return(true);
}
