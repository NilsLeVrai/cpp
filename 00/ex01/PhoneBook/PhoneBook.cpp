/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:08:33 by niabraha          #+#    #+#             */
/*   Updated: 2024/12/02 12:05:35 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() {
	std::cout << "PhoneBook created" << std::endl;
}

PhoneBook::~PhoneBook() {
	std::cout << "PhoneBook destroyed" << std::endl;
}

void PhoneBook::addContact(const Contact& contact) {
	if (contacts.size() < 8) {
		contacts.push_back(contact);
	} else {
		std::cerr << "PhoneBook is full. Cannot add more contacts." << std::endl;
	}
}

void PhoneBook::displayContacts() const {
	for (size_t i = 0; i < contacts.size(); ++i) {
		std::cout << "Contact " << i + 1 << ": " << contacts[i].getName() << std::endl;
	}
}