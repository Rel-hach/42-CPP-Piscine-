#include "Cat.hpp"

Cat::Cat() // is non static 
{
    this->_type = "Cat";
    std::cout << "Default constructor of the Derived class called [ Cat ] is called ." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor of the Derived class called [ Cat ] is called ." << std::endl;
}

Cat::Cat(const Cat& rhs) : Animal(rhs)
{
    std::cout << "copy constructor of the derived class [ Cat ] is called ." << std::endl;
    if (this != &rhs)
        *this = rhs;
}
       
Cat& Cat::operator =(const Cat& rhs)
{
    std::cout << "assignment operator of the derived class [ Cat ] is called ." << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);   
}

void Cat::makeSound() const
{
    std::cout << "Cat sound: Miaaaaw! Miaaaaw!" << std::endl;
}

std::string Cat::getType() const
{
    return (this->_type);
}
