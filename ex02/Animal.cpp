#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string type) : type(type) {
    std::cout << "Animal parameterized constructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
    this->type = other.getType();
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
    return type;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        this->type = other.getType();
    }
    return *this;
}
