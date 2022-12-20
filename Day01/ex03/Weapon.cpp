/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:08:50 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/19 02:39:52 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

    Weapon::Weapon(std::string name)
    {
        _type = name;
    }
    
    Weapon::~Weapon() {};
    
    const std::string &Weapon::getType()
    {
        return (_type);   
    }
    
    void        Weapon::setType(std::string type)
    {
        _type = type;
    }