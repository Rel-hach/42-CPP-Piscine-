#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "Default constructor of the Derived class [ WrongAnimal ] is called ." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor of the Derived class [ WrongAnimal ] is called ." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs)
{
    std::cout << "copy constructor of the derived class [ WrongAnimal ] is called ." << std::endl;
    if (this != &rhs)
        *this = rhs;
}
       
WrongAnimal& WrongAnimal::operator =(const WrongAnimal& rhs)
{
    std::cout << "assignment operator of the Base class [ WrongAnimal ] is called ." << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);   
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound: Unknow .. " << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}
