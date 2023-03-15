#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    std::cout << "Default constructor of the Derived class [ Dog ] is called ." << std::endl;
    this->br = new Brain();
    if (this->br == NULL)
    {
        std::cerr << "Allocation error : exiting process .." << std::endl;
        exit(1);
    }
}

Dog::~Dog()
{
    delete this->br;
    std::cout << "Destructor of the Derived class [ Dog ] is called ." << std::endl;
}

Dog::Dog(const Dog& rhs) : Animal(rhs)
{
    std::cout << "copy constructor of the derived class [ Dog ] is called ." << std::endl;
    if (this != &rhs)
        *this = rhs;
}
       
Dog& Dog::operator =(const Dog& rhs)
{
    std::cout << "Assignment operator of the derived class [ Dog ] is called ." << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
        this->br = new Brain();
        if (this->br == NULL)
        {
            std::cerr << "Allocation failed: exiting process .." << std::endl;
            exit (1);
        }
        *(this->br) = *(rhs.br);
    }
    return (*this);   
}

void Dog::makeSound() const
{
    std::cout << "Dog sound: Haaaaaw! Haaaaaw!" << std::endl;
}

std::string Dog::getType() const
{
    return (this->_type);
}
