/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:08:33 by niabraha          #+#    #+#             */
/*   Updated: 2024/12/10 17:04:01 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->latestContact = 0;
}

void PhoneBook::addContact(void) {

	if (this->latestContact < 2)
	{
		this->phoneDirectory[this->latestContact].proceed();
		this->latestContact++;
	}
	else
	{
		std::cout << "Phonebook is full. Replacing this new contact with the oldest one." << std::endl;
	}
}

void PhoneBook::searchContact(void) {
	
	if (this->latestContact == 0) {
		std::cout << "Phonebook is empty." << std::endl;
		return;
	}
	std::cout << "Enter the index of the contact you want to search: ";
	int index;
	std::cin >> index;

	if (index < 0 || index > 8) {
		std::cout << "Out of range, this index is not valid." << std::endl;
		return;
	}
	if (index < this->latestContact) {
		this->phoneDirectory[index].displayContact();
	}
}