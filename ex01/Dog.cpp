#include "Animal.hpp"

Dog::Dog() : Animal("Dog") {
    this->brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string type) : Animal(type) {
    this->brain = new Brain();
    std::cout << "Dog parameterized constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    this->brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
        *this->brain = *other.brain;
    }
    return *this;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Dog: Woof Woof!" << std::endl;
}