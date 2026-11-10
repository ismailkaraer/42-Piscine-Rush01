# Rush01 · 4×4 Skyscraper Puzzle Solver

[![Build and test](https://github.com/ismailkaraer/42-Piscine-Rush01/actions/workflows/ci.yml/badge.svg)](https://github.com/ismailkaraer/42-Piscine-Rush01/actions/workflows/ci.yml)

A C command-line solver built for the 42 Istanbul Piscine. It uses backtracking to fill a 4×4 grid so that every row and column contains the heights 1 through 4 exactly once and matches the visibility clues around the grid.

A building is visible from an edge when it is taller than every building before it along that line of sight.

## Build and run

Run these commands from the repository root with a C compiler on macOS or Linux.

```sh
cc -Wall -Wextra -Werror ex00/*.c -o rush-01
./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
```

The program accepts one quoted argument containing 16 space-separated numbers from 1 to 4.

| Positions | Clues |
| --- | --- |
| 1–4 | Top, columns from left to right |
| 5–8 | Bottom, columns from left to right |
| 9–12 | Left, rows from top to bottom |
| 13–16 | Right, rows from top to bottom |

Expected output for the example above.

```text
1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3
```

Malformed input or a puzzle with no solution prints `Error`.

## Source layout

| File | Role |
| --- | --- |
| [`main.c`](ex00/main.c) | Program entry point and error output |
| [`input.c`](ex00/input.c) | Clue parsing |
| [`grid.c`](ex00/grid.c) | Grid setup and output |
| [`solver.c`](ex00/solver.c) | Recursive search |
| [`views.c`](ex00/views.c) | Visibility checks |

## Contributors

- [İsmail Karaer](https://github.com/ismailkaraer)
- [Müslüme Bakım](https://github.com/bakimuslume)
- Muhammet Resul Doğan

See the [42 Istanbul Piscine exercise archive](https://github.com/ismailkaraer/42-Piscine) for the individual C and shell modules.
