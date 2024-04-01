/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:10:10 by astein            #+#    #+#             */
/*   Updated: 2024/04/01 14:59:13 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	public:
		// Constructors and Destructor
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		virtual ~ClapTrap();	// NOW IT IS VIRTUAL!

		// Operator overloads
		ClapTrap 			&operator=(const ClapTrap &other);
		
		// Public Member functions - NOW THEY ARE VITUAL!
		virtual void		attack(const std::string &target);
		virtual void		takeDamage(unsigned int amount);
		virtual void		beRepaired(unsigned int amount);
		
		// Accessors (Getters)
		std::string			getName() const;
		unsigned int		getHitPoints() const;
		unsigned int		getEnergyPoints() const;
		unsigned int		getAttackDamage() const;
		ClapTrap			*getNext() const;

		// Mutators (Setters)
		void				setHitPoints(unsigned int hitPoints);
		void				setEnergyPoints(unsigned int energyPoints);
		void				setAttackDamage(unsigned int attackDamage);
		void				setNext(ClapTrap *next);

		// Static functions
		static ClapTrap		*getHead();
		static void			setHead(ClapTrap *head);

	private:
		ClapTrap(); 							// private default constructor
		const std::string	_name;				// Unique name of the ClapTrap
		unsigned int		_hitPoints;			// Health points
		unsigned int		_energyPoints;		// Energy is needed to attack and repair
		unsigned int		_attackDamage;		// How strong the hit is
		ClapTrap			*_next;				// All instances are stored in a linked list
		static ClapTrap		*_head;
};

#endif