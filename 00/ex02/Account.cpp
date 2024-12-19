/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:21:14 by niabraha          #+#    #+#             */
/*   Updated: 2024/12/19 16:10:03 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::displayAccountsInfos() {

	_displayTimestamp();
	std::cout << " index:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp() {

	time_t		t;
	struct tm	*tm;

	t = time(NULL);
	tm = localtime(&t);
	std::cout << "[" << tm->tm_year + 1900 << tm->tm_mon + 1 << tm->tm_mday << "_" << tm->tm_hour << tm->tm_min << tm->tm_sec << "] ";
}


Account::Account(int initial_deposit) : _nbDeposits(0), _nbWithdrawals(0) {

	_displayTimestamp();
	
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;

	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account() {

	_displayTimestamp();
	

	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void Account::makeDeposit( int deposit ) {

	deposit = deposit < 0 ? 0 : deposit;
	std::cout << "deposit:" << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ) {

	std::cout << "withdrawal:" << std::endl;
	withdrawal = withdrawal < 0 ? 0 : withdrawal;
	return true;
}

void Account::displayStatus() const {

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

