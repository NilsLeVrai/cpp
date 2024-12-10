/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:52:33 by niabraha          #+#    #+#             */
/*   Updated: 2024/12/10 17:04:06 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook {
	private:
	Contact phoneDirectory[2];
	int latestContact;

	public:
	PhoneBook();
	void addContact(void);
	void searchContact(void);
};