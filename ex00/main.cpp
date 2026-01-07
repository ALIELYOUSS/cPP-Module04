#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main() {
    std::cout << "--- Correct polymorphism with Animal ---" << std::endl;
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;
    dog->makeSound();
    cat->makeSound();
    meta->makeSound();

    delete meta;
    delete dog;
    delete cat;

    std::cout << "\n--- Incorrect polymorphism with WrongAnimal ---" << std::endl;
    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wcat = new WrongCat();

    std::cout << wcat->getType() << std::endl;
    wcat->makeSound();
    wmeta->makeSound();

    delete wmeta;
    delete wcat;
    return 0;
}
