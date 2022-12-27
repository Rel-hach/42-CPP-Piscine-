/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 05:55:50 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 06:00:26 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointNb = integer << 8;
}

Fixed::Fixed(const float floatNb)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPointNb = floatNb;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPointNb = rhs.fixedPointNb;
    return (*this);
}

std::ostream &operator <<(std::ostream &out, Fixed & obj)
{
    out << obj.toFloat();
    return(out);
}

float Fixed::toFloat( void ) const
{
    return((float)this->fixedPointNb / (256));
}

int Fixed::toInt( void ) const
{
    return(this->fixedPointNb * pow(2,-this->fixedPointNb));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}