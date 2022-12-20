/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:08:34 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/19 03:07:19 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon) 
{
    _name = name;
}

void    HumanA::attack()
{
    std::cout << _name << "  attacks with their " << _weapon.getType() << std::endl;
}