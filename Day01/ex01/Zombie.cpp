/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 23:25:44 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/21 02:29:40 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "zombie created" << std::endl;  
}

Zombie::~Zombie()
{
    std::cout << "zombie destoyed" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name;
    std::cout <<" : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}


