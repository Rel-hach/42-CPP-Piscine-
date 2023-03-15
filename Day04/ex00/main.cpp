#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


int main()
{

    std::cout <<  "Testing Deep copy." << std::endl;
    Cat *one = new Cat();
    one->putNewIdea(1, "I am hungry ..");
    one->putNewIdea(2, "I need a piece of Meat ..");
    //one->putNewIdea(3, "let's find one ..");
   // Cat *two = new Cat(*one);
    std::cout << "1 "<< one->getIdea(1) << std::endl;
    std::cout << "2 "<<one->getIdea(2) << std::endl;
   // std::cout << "3 "<<one->getIdea(3) << std::endl;
    // delete two;
    // std::cout << one->getIdea(1) << std::endl;
    // std::cout << one->getIdea(2) << std::endl;
    // std::cout << one->getIdea(3) << std::endl;
}