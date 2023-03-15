#include "Brain.hpp"

Brain::Brain()
{
    std::cout << std::endl<< "Brain : Default Constructor is called .. " << std::endl << std::endl;
}

Brain::~Brain()
{
    std::cout <<  std::endl <<"Brain : Destructor is called .. " << std::endl << std::endl;
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Brain: Copy constructor is called .." << std::endl;
    *this = obj;
}

Brain& Brain::operator =(const Brain& obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = obj.ideas[i];
        }
    }
    return (*this);
}

void Brain::setIdea(unsigned int i, std::string idea)
{
    if (i >= 1 && i <= 100)
    {
        i-=1;
        this->ideas[i] = idea;
    }
}

std::string Brain::getStoredIdea(unsigned int i)
{
    if (this->ideas[i].empty())
        return ("");
    return (this->ideas[i]);
}