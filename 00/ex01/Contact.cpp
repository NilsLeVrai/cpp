/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:56:52 by niabraha          #+#    #+#             */
/*   Updated: 2024/12/12 16:53:06 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Contact.hpp"
#include <iostream>

Contact::Contact( void ) {
	this->_firstName = "";
	this->_lastName = "";
	this->_nickname = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
}
/*
Un seul
*/
void Contact::displaySpecificContact(int i) {

	std::cout << std::setw(10) << i << "|";
	if (this->_firstName.size() > 10) {
		std::cout << this->_firstName.substr(0, 9) << ".";
		std::cout << "|";
	}
	else {
		std::cout << std::setw(10) << this->_firstName;
		std::cout << "|";
	}
	if (this->_lastName.size() > 10) {
		std::cout << this->_lastName.substr(0, 9) << ".";
		std::cout << "|";
	}
	else {
		std::cout << std::setw(10) << this->_lastName;
		std::cout << "|";
	}
	if (this->_nickname.size() > 10) {
		std::cout << this->_nickname.substr(0, 9) << ".";
		std::cout << "|";
	}
	else {
		std::cout << std::setw(10) << this->_nickname;
		std::cout << "|";
	}
	std::cout << std::endl << std::endl;
}

/*
tous les contacts
*/
void Contact::displayAllContact() {
	std::cout << std::left;
	std::cout << std::setw(16) << "First name: " << this->_firstName << std::endl;
	std::cout << std::setw(16) << "Last name: " << this->_lastName << std::endl;
	std::cout << std::setw(16) << "Nickname: " << this->_nickname << std::endl;
	std::cout << std::setw(16) << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << std::setw(16) << "Darkest secret: " << this->_darkestSecret << std::endl;
	
}

/* void Contact::replaceContact() {
	
} */
void Contact::proceed() {

	do {
		std::cout << "Enter first name: ";
		std::getline(std::cin, this->_firstName);
		if (this->_firstName.empty()) {
			std::cout << "First name cannot be empty. Please try again." << std::endl;
		}
	} while (this->_firstName.empty());
	do {
		std::cout << "Enter last name: ";
		std::getline(std::cin, this->_lastName);
		if (this->_lastName.empty()) {
			std::cout << "Last name cannot be empty. Please try again." << std::endl;
		}
	}
	while (this->_lastName.empty());
	do {
		std::cout << "Enter nickname: ";
		std::getline(std::cin, this->_nickname);
		if (this->_nickname.empty()) {
			std::cout << "Nickname cannot be empty. Please try again." << std::endl;
		}
	} while (this->_nickname.empty());
	do {
		std::cout << "Enter phone number: ";
		std::getline(std::cin, this->_phoneNumber);
		if (this->_phoneNumber.empty()) {
			std::cout << "Phone number cannot be empty. Please try again." << std::endl;
		}
	} while (this->_phoneNumber.empty());
	do {
		std::cout << "Enter darkest secret: ";
		std::getline(std::cin, this->_darkestSecret);
		if (this->_darkestSecret.empty()) {
			std::cout << "Darkest secret cannot be empty. Please try again." << std::endl;
		}
	} while (this->_darkestSecret.empty());
}

std::string Contact::getFirstName(){
	return (this->_firstName);
}

void Contact::setFirstName(std::string firstName){
	this->_firstName = firstName;
}

std::string Contact::getLastName(){
	return (this->_lastName);
}

void Contact::setLastName(std::string lastName){
	this->_lastName = lastName;
}

std::string Contact::getNickName(){
	return (this->_nickname);
}

void Contact::setNickName(std::string nickName){
	this->_nickname = nickName;
}

std::string Contact::getPhoneNumber(){
	return (this->_phoneNumber);
}

void Contact::setPhoneNumber(std::string phoneNumber){
	this->_phoneNumber = phoneNumber;
}

std::string Contact::getDarkestSecret(){
	return (this->_darkestSecret);
}

void Contact::setDarkestSecret(std:: string darkestSecret){
	this->_darkestSecret = darkestSecret; 
}