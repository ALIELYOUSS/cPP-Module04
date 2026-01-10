# ex01 — Report

Point of the day

This exercise focuses on resource ownership and deep copy semantics: implementing a `Brain` class (owner of an array of `std::string` ideas), and ensuring `Dog` and `Cat` classes that contain a `Brain*` perform deep copies (Rule of Three/Five).

What was done / files present

- `Brain.hpp`, `Brain.cpp` — default constructor, copy constructor and destructor are implemented; assignment operator is declared but implementation is missing.
- `Dog.hpp`, `Dog.cpp` — contains a `Brain*` member; constructor allocates a `Brain`, copy constructor clones the brain, operator= uses `*this->brain = *other.brain` (relies on `Brain::operator=` to exist), destructor deletes the brain.
- `Cat.hpp`, `Cat.cpp` — similar structure to `Dog`.
- `Animal.hpp`, `Animal.cpp`, `main.cpp`, `Makefile`, `todo`

Observed/Notes

- The `Brain` class implements copy-construction (deep copy) but the `operator=` implementation is not present in `Brain.cpp` — this is required because `Dog::operator=` performs `*this->brain = *other.brain`.
- `main.cpp` includes a test for deep copy by creating a `Dog basic; Dog tmp = basic;` but additional explicit checks that modifying one `Brain` doesn't affect the copied object would improve confidence.

Next steps / TODO

- Implement `Brain::operator=` to perform a safe deep copy and handle self-assignment.
- Add tests in `main.cpp` or a dedicated test file that modify one object's ideas and assert the other object's ideas remain unchanged.
- Run memory leaks checks (valgrind) after `make` to ensure proper allocation/deallocation.

Key learning points

- When a class owns dynamic memory, default copy assignment/constructor produce shallow copies — to avoid aliasing and double-free bugs implement deep copy semantics.
- The Rule of Three: if a class implements a destructor, copy constructor, or copy assignment operator, it likely needs all three (and possibly move ops for Rule of Five).
