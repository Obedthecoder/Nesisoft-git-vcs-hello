# Learning Journal

A personal log of what I built, bugs I encountered, and concepts I learned.

---

## Week 1 — Project Setup & First Commit

### What I Did
- Created a new Git repository
- Wrote my first C++ program `hello.cpp`
- Created `arith_calc.cpp` to take user input and display the sum
- Made my first commits with descriptive messages

### Concepts Learned
- **`git init`** — initialises a new Git repository in a folder
- **`git add`** — stages files ready to be committed
- **`git commit -m ""`** — saves a snapshot of your code with a label
- **`git push`** — uploads your commits to GitHub

### Challenges
- Forgot to use `git add` before committing — learned that Git doesn't
  automatically include your changes

---

## Week 2 — Modular Programming & Branching

### What I Did
- Separated function declarations into `function.h`
- Moved function definitions into `function.cpp`
- Created a branch `feature1/complete-calculator` to add all operations
- Merged the branch back into `main`

### Concepts Learned
- **Header files** (`function.h`) — declare what functions exist
- **Source files** (`function.cpp`) — define how functions actually work
- **`git checkout -b`** — creates and switches to a new branch
- **`git merge --no-ff`** — merges a branch and keeps the history visible
- **Branches** are temporary workspaces — work happens there, then merges into main

### Challenges
- Got the error `merge: not something we can merge` — learned it was because
  the branch had never been pushed to GitHub
- Fixed it by running `git push origin feature1/complete-calculator`

---

## Week 3 — Bug Fixes & Professional Practices

### What I Did
- Fixed a bug in `divide()` where integer division was giving wrong results
- Updated the README with full project documentation
- Learned how to read `git log --oneline --graph`

### The Bug I Fixed

```cpp
// BEFORE — wrong answer
double divide(int a, int b) {
    return a / b;   // divide(10, 4) gave 2 instead of 2.5 ❌
}

// AFTER — correct
double divide(int a, int b) {
    return static_cast<double>(a) / b;  // divide(10, 4) now gives 2.5 ✅
}
```

### Concepts Learned
- **Integer division** — dividing two `int` values always drops the decimal
- **`static_cast<double>`** — converts an integer to a double before dividing
- **`git log --oneline --graph`** — shows a visual history of all commits
  and branches
- **Conventional commits** — using prefixes like `feat:`, `fix:`, `docs:`
  makes history readable

---

## Reflections

| Skill | Before | After |
|-------|--------|-------|
| Git commits | Typed `"update"` or `"changes"` | Use `feat:`, `fix:`, `docs:` prefixes |
| Branching | Never used branches | Comfortable creating and merging branches |
| Header files | Put everything in one file | Separate `.h` and `.cpp` files properly |
| Debugging | Didn't know why divide was wrong | Understand integer vs double division |