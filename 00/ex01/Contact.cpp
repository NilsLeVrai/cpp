/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:56:52 by niabraha          #+#    #+#             */
/*   Updated: 2024/11/18 11:53:28 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {
	this->_firstName = "";
	this->_lastName = "";
	this->_nickname = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
}

Contact::~Contact( void ) {
	std::cout << "bite detruite" << std::endl;
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