# C++ Module 04: Subtype Polymorphism, Abstract Classes, and Interfaces

Solutions and notes for **42's C++ Module 04**, focused on inheritance,
polymorphism, deep copies, abstract classes, and interface-driven design in
C++98.

## Module Overview

The exercises build a small class hierarchy around `Animal`, `Dog`, and `Cat`.
They progressively introduce virtual methods, virtual destructors, resource
ownership, and abstract interfaces.

## Exercises

| Directory | Topic | Status |
| --- | --- | --- |
| `ex00` | Basic inheritance and polymorphism | Implemented |
| `ex01` | Deep copies with `Brain` | Implemented |
| `ex02` | Abstract `Animal` base class | Implemented |

### `ex00` - Polymorphism

Introduces the `Animal`, `Dog`, and `Cat` hierarchy, including virtual
`makeSound()` methods and correct destruction through an `Animal` pointer. It
also includes `WrongAnimal` and `WrongCat` to demonstrate the difference
between virtual and non-virtual behavior.

### `ex01` - Brain and Deep Copy

Adds a `Brain` object to `Dog` and `Cat`. The exercise tests arrays of animals,
dynamic allocation, copy construction, and deep-copy behavior.

### `ex02` - Abstract Animal

Turns `Animal` into an abstract base class while retaining polymorphic `Dog`
and `Cat` implementations. The provided test verifies virtual dispatch and
safe cleanup through base-class pointers.

## Requirements

- A C++ compiler with C++98 support
- `make`
- Unix-like environment

The implemented exercises use:

```text
c++ -Wall -Wextra -Werror -std=c++98
```

## Build and Run

Each implemented exercise has its own Makefile and produces an executable named
`Animal`.

```bash
cd ex00
make
./Animal
```

The same command works from `ex01` and `ex02`:

```bash
cd ex01 && make && ./Animal
cd ../ex02 && make && ./Animal
```

## Makefile Commands

Run these commands from an implemented exercise directory:

```bash
make          # Build the executable
make clean    # Remove object files
make fclean   # Remove object files and the executable
make re       # Rebuild from scratch
```

To clean all exercises from the repository root:

```bash
for directory in ex00 ex01 ex02; do make -C "$directory" fclean; done
```

## Project Structure

```text
.
├── ex00/
│   ├── Animal.cpp
│   ├── Animal.hpp
│   ├── Cat.cpp
│   ├── Cat.hpp
│   ├── Dog.cpp
│   ├── Dog.hpp
│   ├── Makefile
│   ├── WrongAnimal.cpp
│   ├── WrongAnimal.hpp
│   └── main.cpp
├── ex01/
│   ├── Animal.cpp
│   ├── Animal.hpp
│   ├── Brain.cpp
│   ├── Brain.hpp
│   ├── Cat.cpp
│   ├── Cat.hpp
│   ├── Dog.cpp
│   ├── Dog.hpp
│   ├── Makefile
│   └── main.cpp
├── ex02/
│   ├── Animal.cpp
│   ├── Animal.hpp
│   ├── Brain.cpp
│   ├── Brain.hpp
│   ├── Cat.cpp
│   ├── Cat.hpp
│   ├── Dog.cpp
│   ├── Dog.hpp
│   ├── Makefile
│   └── main.cpp
└── README.md
```

## C++98 Concepts

This module practices virtual functions, virtual destructors, base-class
interfaces, dynamic allocation, ownership, copy construction, assignment, and
the Orthodox Canonical Form. No C++11-and-later language features or external
libraries are required.