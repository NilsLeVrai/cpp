/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:33:46 by niabraha          #+#    #+#             */
/*   Updated: 2024/12/10 16:48:40 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string param;
	
	while (1)
	{
		std::cout << "Enter a command: ADD, SEARCH or EXIT" << std::endl;
		if (!(std::getline(std::cin, param)))
		{
			std::cout << "End of input. Ciao bye" << std::endl;
			break ;
		}
		if (param == "ADD")
		{
			phonebook.addContact();
		}
		else if (param == "SEARCH")
		{
			phonebook.searchContact();
		}
		else if (param == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << "Invalid commant. Either type ADD, SEARCH or EXIT" << std::endl;
		}
	}
}
