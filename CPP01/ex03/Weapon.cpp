/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:27:07 by rdragan           #+#    #+#             */
/*   Updated: 2023/10/18 20:10:55 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}
Weapon::~Weapon(void) {}

std::string&	Weapon::getType(void)
{
	return type;
}

void			Weapon::setType(std::string type)
{
	type = type;
}