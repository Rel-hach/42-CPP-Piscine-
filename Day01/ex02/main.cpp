/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:15:52 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/07 16:53:36 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::endl;
using std::cout;
using std::string;

int main (void)
{
    string str = "HI THIS IS BRAIN";
    string *stringPTR = &str;
    string& stringREF = str;

    /*---------------------------------------------------------------------------*/
    cout << "Memory adress of 'str' is = " << &str << endl;
    cout << "Memory adress held by stringPTR is = " << stringPTR << endl;
    cout << "Memory adress held by stringREF is = " << &stringREF << endl << endl;
    /*---------------------------------------------------------------------------*/
    cout << "Value of 'str' is = " << str << endl;
    cout << "Value pointed by stringPTR is = " << *stringPTR << endl;
    cout << "Value pointed by stringREF is = " << stringREF << endl;
     /*---------------------------------------------------------------------------*/
}