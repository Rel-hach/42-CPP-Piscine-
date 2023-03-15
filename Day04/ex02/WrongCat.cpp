#include "WrongCat.hpp"

WrongCat::WrongCat() // is non static 
{
    this->_type = "WrongCat";
    std::cout << "Default constructor of the Derived class called [ WrongCat ] is called ." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor of the Derived class called [ WrongCat ] is called ." << std::endl;
}

WrongCat::WrongCat(const WrongCat& rhs) : WrongAnimal(rhs)
{
    std::cout << "copy constructor of the derived class [ WrongCat ] is called ." << std::endl;
    if (this != &rhs)
        *this = rhs;
}
       
WrongCat& WrongCat::operator =(const WrongCat& rhs)
{
    std::cout << "assignment operator of the derived class [ WrongCat ] is called ." << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);   
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound: Miaaaaw! Miaaaaw!" << std::endl;
}

std::string WrongCat::getType() const
{
    return (this->_type);
}