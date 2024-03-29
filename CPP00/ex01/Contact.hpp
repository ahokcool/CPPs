/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:51:42 by astein            #+#    #+#             */
/*   Updated: 2024/03/14 17:45:25 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "freak_bible.hpp"
# include <string>
# include <iostream>
# include <sstream>
# include <iomanip>

class	Contact
{
	public:
		Contact(void);
		
		bool		set_contact(void);
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_phone_number(void) const;
		std::string	get_darkest_secret(void) const;
		void		display_contact(const int indentation) const;
		void		print_contact_line(std::string color, const int indentation, const int index) const;
		
	private:
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_phone_number;
		std::string		_darkest_secret;	
};

#endif