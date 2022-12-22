/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 04:51:43 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/22 05:53:18 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fpNb = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cp)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cp;
}

Fixed &Fixed::operator=(const Fixed &cp)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fpNb = cp.fpNb;
    return *this;
}
    
int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->fpNb);
}

void Fixed::setRawBits( int const raw )
{
    this->fpNb = raw;
}