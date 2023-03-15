#include "Animal.hpp"

Animal::Animal() : _type("DEFAULT-ANIMAL")
{
    std::cout << "Default constructor of the Base class called [ Animal ] is called ." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor of the Base class called [ Animal ] is called ." << std::endl;
}

Animal::Animal(const Animal& rhs)
{
    std::cout << "copy constructor of the Base class [ Animal ] is called ." << std::endl;
    if (this != &rhs)
        *this = rhs;
}
       
Animal& Animal::operator =(const Animal& rhs)
{
    std::cout << "Assignment operator of the Base class [ Animal ] is called ." << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);   
}

void Animal::makeSound () const
{
    std::cout << "Animal sound: Unknown ... " << std::endl;
}


std::string Animal::getType() const
{
    return (this->_type);
}
