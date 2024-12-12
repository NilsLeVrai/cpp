/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:54:08 by niabraha          #+#    #+#             */
/*   Updated: 2024/12/12 16:35:07 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <limits>

class Contact{
	private:
	
	std::string _lastName;
	std::string _firstName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

	public:
		Contact( void );
		std::string getFirstName();
		void 		setFirstName(std::string);
		std::string getLastName();
		void 		setLastName(std::string);
		std::string getNickName();
		void 		setNickName(std::string);
		std::string getPhoneNumber();
		void 		setPhoneNumber(std::string);
		std::string getDarkestSecret();
		void 		setDarkestSecret(std::string);
		void 		proceed();
		void 		displaySpecificContact(int i);
		void		displayAllContact();
};