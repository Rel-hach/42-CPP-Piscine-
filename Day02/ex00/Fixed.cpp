/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 04:51:43 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 04:30:58 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->setRawBits(0);
}

/* Here The default constructor is called, it shows a message 
and it calls the function set RawBits to initialize the fixed_point_var with 0
*/

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

/* Here we have called the copy constructor by creating a new object called b
    and giving in its param an already created object a in order to make a copy.
    
    we send its reference as param.
    
    'this' is the pointer to B the new object created in main. each time we call
    a member function, constructor or destructor, the pointer to that object is
    sent hidden.


    Each time you call a method (member function, constructor or deconstructor)
    a hidden pointer to that object is sent as parameter to that function.

    --------

    when an operator is found, it will check if there is an assignement operator.
*/

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

/*
when the program finishes .. a sentence will be printed on the screen.
*/

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPointNb = rhs.fixedPointNb;
    return (*this);
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

// This pointer are sent hidden each time you call a member function.

/* 
when and why we need to call an :
- overloaded assignment operator --> assigning  
- copy constructor for copying 
- destructor for deleting 



 */


