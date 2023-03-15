#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



int main()
{
    std::cout << "Constructing .. " << std::endl << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "Testing .. " << std::endl << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "Testing Wrong Animal.. " << std::endl << std::endl;

    WrongAnimal *ptr = new WrongCat();
    ptr->makeSound();

    std::cout << "Destructing .. " << std::endl << std::endl;
    delete meta;
    delete j;
    delete i;
    delete ptr;

    return 0;
}