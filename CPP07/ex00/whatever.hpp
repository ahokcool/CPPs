/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astein <astein@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:32:03 by astein            #+#    #+#             */
/*   Updated: 2024/04/21 14:06:52 by astein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template< typename T >
void	swap (T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

template< typename T >
const T	min (const T &a, const T &b)
{
	if(a < b)
		return (a);
	else	
		return (b);
}

template< typename T >
const T	max (const T &a, const T &b)
{
	if(a > b)
		return (a);
	else	
		return (b);
}

#endif
