#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    this->brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string type) : Animal(type) {
    this->brain = new Brain();
    std::cout << "Cat parameterized constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    this->brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat assignement op called\n";
    if (this != &other) {
        Animal::operator=(other);
        *this->brain = *other.brain;
    }
    return *this;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Cat: Meow Meow!" << std::endl;
}