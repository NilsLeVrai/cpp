/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:33:46 by niabraha          #+#    #+#             */
/*   Updated: 2024/12/06 15:59:48 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/phonebook.hpp"


int main()
{
	PhoneBook PhoneBook_instance;
	std::string param;
	
	while (1)
	{
		std::cout << "Enter a command: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, param);
		if (param == "ADD")
		{
			
		}
	}
}
