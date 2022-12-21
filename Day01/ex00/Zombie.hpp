/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:59:43 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/21 02:38:42 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
    private:
    std::string _name;
    public:
    Zombie(std::string  name);
    ~Zombie();
    void    announce(void);
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif
