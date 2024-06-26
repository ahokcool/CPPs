/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 23:18:14 by astein            #+#    #+#             */
/*   Updated: 2024/03/29 21:30:17 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(const std::string &name);
void	randomChump(const std::string &name);

int main()
{

	// Allocation on the stack
	Zombie zombie1 = Zombie("Zombie 1");
	zombie1.announce();

	// Allocation on the heap
	Zombie *zombie2 = newZombie("Zombie 2");
	zombie2->announce();
	
	// Random allocation on the stack (randomChump)
	randomChump("Zombie 3");
	randomChump("Zombie 4");
	randomChump("Zombie 5");
	
	// We need to delete the heap allocated zombie
	delete zombie2;
	
	return 0;
}
