#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        virtual ~Brain();
        Brain(const Brain &obj);
        Brain& operator =(const Brain& obj);
        void setIdea(unsigned int i, std::string idea);
        std::string getStoredIdea(unsigned int i);
};

#endif