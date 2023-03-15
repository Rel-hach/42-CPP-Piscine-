#include "Cat.hpp"

Cat::Cat() // is non static 
{
    std::cout << "Default constructor of the Derived class called [ Cat ] is called ." << std::endl;
    this->_type = "Cat";
    this->br = new Brain();
    if (this->br == NULL)
    {
        std::cerr << "Allocation error" << std::endl;
        exit(1);
    }
}

Cat::~Cat()
{
    delete this->br;
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

void Cat::putNewIdea(unsigned int i, std::string idea)
{
    this->br->setIdea(i, idea);
}

std::string Cat::getIdea(unsigned int i)
{
    return (this->br->getStoredIdea(i));
}