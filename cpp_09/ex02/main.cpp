/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:33:03 by rel-hach          #+#    #+#             */
/*   Updated: 2023/04/16 10:33:05 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac, char **av)
{
    if (ac < 1)
        return (0);
    PmergeMe obj;
    // for (int i = 1; i < ac; i++)
    //     std::cout << av[i] << " ";
    // std::cout << std::endl;
    obj.fillVector(av);
}