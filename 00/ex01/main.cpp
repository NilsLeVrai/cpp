/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:33:46 by niabraha          #+#    #+#             */
/*   Updated: 2024/11/18 12:17:39 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include "Phonebook.hpp"

#include <iostream>
#include <string>

int searchContact(Phonebook *phoneBook){
	
}

int addContact(Phonebook *phoneBook){
	
}

int main()
{
	Phonebook phoneBook;
	std::string param;

	while (1)
	{
		std::cout << "Write a parameter such as \"ADD\", \"SEARCH\" or \"EXIT\"" << std::endl;
		std::cin >> param;
		if (param.compare("ADD") == 0){
			if (addContact(&phoneBook))
				return (1);
		}
		else if (param.compare("SEARCH") == 0){
			if (searchContact(&phoneBook))
				return (1);
		}
		else if (param.compare("EXIT") == 0){
			if (exit(0));
		}
		else
			std::cout << "Please, write either \"ADD\", \"SEARCH\" or \"EXIT\"" << std::endl;
	}
}
