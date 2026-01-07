#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    const int size = 4;
    Animal* animals[size];
    for (int k = 0; k < size / 2; k++)
        animals[k] = new Dog();
    for (int k = size / 2; k < size; k++)
        animals[k] = new Cat();
    for (int k = 0; k < size; k++)
        animals[k]->makeSound();
    for (int k = 0; k < size; k++)
        delete animals[k];
    std::cout << "--- Testing Deep Copy ---" << std::endl;
    Dog basic;
    Dog tmp = basic;
    return 0;
}
