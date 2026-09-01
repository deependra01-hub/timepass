# C++ Practice Collection

This repository is a small collection of standalone C++ exercises. Each source file is its own example program, which makes it easy to compile, run, and compare basic language features one at a time.

## What's in the repo

- array creation and traversal examples
- sum and vector demonstrations
- unique-value helpers for arrays
- compiled `.exe` files produced from local Windows builds

## Repository Layout

```text
.
├── *.cpp
├── *.exe
└── README.md
```

## Build

Use any modern C++ compiler. For example, with `g++`:

```powershell
g++ sum.cpp -o sum.exe
g++ vector.cpp -o vector.exe
```

You can repeat that pattern for the other files in the repo.

## Run

After compiling, run the executable that matches the example you want to inspect.

```powershell
.\sum.exe
.\vector.exe
```

## Notes

- The `.exe` files are build outputs, not source.
- Each `.cpp` file is intentionally short and self-contained.
- This repo is best read as a practice notebook rather than a library or application.
