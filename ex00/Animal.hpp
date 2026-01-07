#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
    std::string type;
public:
    Animal();
    Animal(const std::string type);
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual ~Animal();
    std::string     getType() const;
    virtual void    makeSound() const;
};

class Dog : public Animal{
public:
    Dog();
    Dog(const std::string type);
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();
    void    makeSound() const;
};

class Cat : public Animal{
public:
    Cat();
    Cat(const std::string type);
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();
    void    makeSound() const;
};

#endif