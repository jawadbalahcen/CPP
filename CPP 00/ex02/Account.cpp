/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:59:03 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/26 19:02:48 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
# include <cctype>
# include <iostream>
# include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	_displayTimestamp();
	_totalAmount += initial_deposit;
	_nbDeposits = _totalNbWithdrawals;
	_nbWithdrawals = _totalNbWithdrawals;
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";" << "created\n";
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";" << "closed\n";
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	std::cout << "amount:" << _amount << ";";
	_nbDeposits += 1;
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	if (withdrawal <= _amount)
	{
		_totalAmount -= withdrawal;
		_totalNbWithdrawals += 1;
		std::cout << "withdrawal:" << withdrawal << ";";
		_amount -= withdrawal;
		std::cout << "amount:" << _amount << ";";
		_nbWithdrawals += 1;
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (1);
	}
	std::cout << "withdrawal:refused\n";
	return (0);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
    char buffer[20];
	std::time_t now = std::time(nullptr);
    std::tm* time_info = std::localtime(&now);
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", time_info);
    std::cout << "[" << buffer << "] ";
}