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

Fixed::Fixed(int const integerNb)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointNb = roundf(integerNb * (1 << this->fractionalBits));
}

Fixed::Fixed(float const floatNb)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPointNb = roundf(floatNb * (1 << this->fractionalBits));
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

float Fixed::toFloat( void ) const
{
    return ((float)this->fixedPointNb / (float)(1 << this->fractionalBits));
}

int Fixed::toInt( void ) const
{
    return(this->fixedPointNb / (int)(1 << this->fractionalBits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->fixedPointNb);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointNb = raw;
}

std::ostream &operator <<(std::ostream &out, Fixed const& obj)
{
    out << obj.toFloat();
    return(out);
}