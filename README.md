# C++ Basics Study Repository

This repository contains my hands-on work while learning C++ with the JetBrains `C++ Basics` course in `CLion`.
It is both a study workspace and a running record of my progress as I build small exercises, debug mistakes, and gradually assemble a simple 2D game.

## Overview

This project is centered on practical learning rather than a single finished application.
The repository is organized as a sequence of lessons and tasks that introduce C++ fundamentals step by step, including:

- core syntax and control flow
- functions, structs, enums, and arrays
- memory layout, pointers, references, and dynamic allocation
- object-oriented programming and ownership semantics
- templates and standard library containers
- testing, debugging, and iterative problem solving in `CLion`

Status: `in progress`

Because this is an active learning repo, some tasks may be complete, some may still be under development, and some files may intentionally contain unfinished code while I work through a lesson.

## Learning Path

| Module | Focus |
| --- | --- |
| `WarmUp` | basic syntax, variables, input/output, functions, loops, structs, enums, arrays, and the first game mechanics |
| `MemoryManagement` | pointers, references, memory layout, dynamic allocation, memory errors, type casts, and C-style strings |
| `ObjectOrientedProgramming` | classes, inheritance, polymorphism, encapsulation, constructors, destructors, copy/move semantics, and RAII |
| `StandardLibraryEssentials` | templates, type deduction, STL containers, iterators, algorithms, and streams |

## Repository Structure

```text
.
|-- CMakeLists.txt
|-- include/
|-- resources/
|-- WarmUp/
|-- MemoryManagement/
|-- ObjectOrientedProgramming/
|-- StandardLibraryEssentials/
|-- test-framework/
|-- README.md
|-- LICENSE
```

### Key directories

- `include/` shared headers used across multiple tasks and game stages
- `resources/` textures, fonts, and data files used by the game
- `WarmUp/`, `MemoryManagement/`, `ObjectOrientedProgramming/`, `StandardLibraryEssentials/` course modules and lesson content
- `*/task/` buildable exercise projects for the current stage of a module
- `*/<Lesson>/task.md` lesson statements and instructions
- `test-framework/` local GoogleTest setup used by exercise test targets

One useful design detail in this repo is that tasks are added as separate CMake subprojects.
That keeps lessons isolated, so a compile error in one task does not break every other task.

## Tech Stack

- `C++14`
- `CMake`
- `CLion`
- `SFML`
- `GoogleTest`

## Running the Project

### Recommended workflow: CLion

1. Open the repository in `CLion`.
2. Let `CLion` load the CMake project and configure the toolchain.
3. Select a lesson target such as `WarmUp-MovingOn-RunningInALoop-run` or its corresponding `-test` target.
4. Build and run the selected configuration from the IDE.

### Command line workflow

If `cmake` is installed on your machine and available on `PATH`, you can also build from the terminal:

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build --target WarmUp-MovingOn-RunningInALoop-run
ctest --test-dir build --output-on-failure
```

Replace the target name with the lesson you want to build.

## Notes on Dependencies

- `GoogleTest` is fetched during CMake configuration.
- On Linux and macOS, `SFML 2.5.x` should be installed and discoverable by CMake.
- On Windows, the root CMake setup can build `SFML` from source when needed.

## What This Repository Represents

This is not meant to be a polished production codebase.
It is a structured learning repository where I:

- practice writing and reading C++
- fix compiler and logic errors
- build confidence with debugging and testing
- keep a clear record of what I have studied

That also means the commit history and code changes reflect learning progress, not just final answers.

## Attribution

This repository is based on the JetBrains `C++ Basics` course and includes course materials and assets distributed under the MIT license.
See [LICENSE](LICENSE) for the original license text.
