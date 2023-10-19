/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:32:10 by rdragan           #+#    #+#             */
/*   Updated: 2023/10/07 03:24:13 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA(void);
		void	attack(void);
	private:
		Weapon*	_weapon;
		std::string	_name;
};
