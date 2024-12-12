/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:33:46 by niabraha          #+#    #+#             */
/*   Updated: 2024/12/12 18:05:14 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

int main()
{
	PhoneBook repertory;
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
			repertory.addContact();
		}
		else if (param == "SEARCH")
		{
			repertory.searchContact();
			//break;
		}
		else if (param == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << "Invalid command. Either type ADD, SEARCH or EXIT" << std::endl;
		}
	}
}
