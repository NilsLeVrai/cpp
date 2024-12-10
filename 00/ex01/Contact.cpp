/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:56:52 by niabraha          #+#    #+#             */
/*   Updated: 2024/12/10 17:11:22 by niabraha         ###   ########.fr       */
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

void Contact::displayContact() {
	std::cout << std::left;
	std::cout << std::setw(16) << "First Name: " << this->_firstName << std::endl;
	std::cout << std::setw(16) << "Last Name: " << this->_lastName << std::endl;
	std::cout << std::setw(16) << "Nickname: " << this->_nickname << std::endl;
	std::cout << std::setw(16) << "Phone Number: " << this->_phoneNumber << std::endl;
	std::cout << std::setw(16) << "Darkest Secret: " << this->_darkestSecret << std::endl;
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