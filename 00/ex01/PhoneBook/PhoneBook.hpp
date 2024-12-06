/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:52:33 by niabraha          #+#    #+#             */
/*   Updated: 2024/12/06 16:07:57 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class PhoneBook {
	private:
	int phoneDirectory[8];
	int latestContact;

	public:
	PhoneBook(); //rajouter les parametres
	~PhoneBook();
	void addContact(Contact);
	void displayContacts(void);
	void searchContact(int);
};