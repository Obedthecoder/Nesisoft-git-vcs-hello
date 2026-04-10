# Nesisoft Git VCS Hello

> An interactive command-line calculator built in C++, demonstrating modular programming and Git version control workflow.

![Language](https://img.shields.io/badge/Language-C%2B%2B17-blue)
![License](https://img.shields.io/badge/License-MIT-green)
![Status](https://img.shields.io/badge/Status-Active-brightgreen)

---

## 📋 Table of Contents

- [About](#about)
- [Project Structure](#project-structure)
- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Learning Journal](#learning-journal)
- [License](#license)

---

## About

This project is an interactive C++ calculator that takes two numbers from the
user and performs arithmetic operations. It demonstrates:

- **Modular design** — separating function declarations (`.h`) from
  definitions (`.cpp`) and the main program
- **User input handling** — reading values with `cin`
- **Git best practices** — branching, merging, and descriptive commit messages

---

## Project Structure
Nesisoft-git-vcs-hello/
├── arith_calc.cpp      # Main calculator program
├── function.h          # Function declarations
├── function.cpp        # Function definitions
├── hello.cpp           # Hello world entry point
├── LEARNING_JOURNAL.md # Weekly progress notes
└── README.md
---

## Features

| Function    | Description                          |
|-------------|--------------------------------------|
| `add`       | Returns the sum of two integers      |
| `subtract`  | Returns the difference               |
| `multiply`  | Returns the product                  |
| `divide`    | Returns the quotient as a double     |
| `factorial` | Recursively computes n!              |

---

## Getting Started

### Prerequisites

- **g++** (GCC 7+) or any C++17-compatible compiler

### Build & Run

```bash
# Compile the calculator
g++ arith_calc.cpp function.cpp -o calc

# Run it
./calc
```

---

## Usage
Enter the first number: 10
Enter the second number: 4
Sum:        14
Difference: 6
Product:    40
Quotient:   2.5
---

## Learning Journal

See [LEARNING_JOURNAL.md](LEARNING_JOURNAL.md) for weekly progress notes,
bugs found, and lessons learned.

---

## License

MIT © 2026