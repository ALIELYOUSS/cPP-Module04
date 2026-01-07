#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Default constructor called\n";
}

Brain::Brain(const Brain& other){
    std::cout << "Brain copy constructor called\n";
    for (size_t i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
}

Brain::~Brain(){
    std::cout << "Brain destructor called";
}
