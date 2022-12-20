/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 03:43:46 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/20 00:52:25 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ()
{
    Harl Harl;
    std::string comment;
    std::cout << "Enter one of the below comments" << std::endl;
    std::cout << "[DEBUG] - [INFO] - [WARNING] - [ERROR]" << std::endl;
    std::cin >> comment;
    Harl.complain(comment);
}