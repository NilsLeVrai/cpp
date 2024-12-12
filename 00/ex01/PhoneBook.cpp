/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:08:33 by niabraha          #+#    #+#             */
/*   Updated: 2024/12/12 16:57:09 by niabraha         ###   ########.fr       */
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
	
	int index;

	if (this->latestContact == 0) {
		std::cout << "Phonebook is empty." << std::endl;
		return;
	}
	std::cout << "--------------------------------------------" << std::endl;
	std::cout <<  "|      Displaying all your contacts        |" << std::endl;
	std::cout << "|    index|first name|last name |nickname  |" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	
	for (int i = 0; i < this->latestContact; i++) {
		this->phoneDirectory[i].displaySpecificContact(i);
	}
	while (true) {
		std::cout << "Enter the index of the contact you want to search: ";
		std::cout << std::endl;
		std::cin >> index;
		if (std::cin.fail() || index < 0 || index >= this->latestContact) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please enter a valid index." << std::endl;
		}
		else {
			break;
		}
	}
	if (index < this->latestContact) {
		std::cout << "\033[33mDisplaying your specific contact's informations.\033[0m" << std::endl;
		this->phoneDirectory[index].displayAllContact();
	}
}