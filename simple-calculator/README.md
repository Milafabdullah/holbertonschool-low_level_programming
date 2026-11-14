# Simple Calculator

A small command-line calculator written in C, built step by step.

## Files

| File | Description |
|------|-------------|
| calculator.c | Menu-driven calculator: add, subtract, multiply and divide |

## Compilation

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Design decisions

- **Decimal numbers.** All numbers are decimals (double), so A and B can be whole numbers or decimals such as 2.5. This keeps every operation consistent and allows divisions like 10 / 4 = 2.5.
- **Output format.** Results are printed with up to 15 significant digits and no trailing zeros: 35, -15, 2.5. Very large results use scientific notation.
- **Errors.**
  - Invalid choice: a menu number that does not exist, or text typed at the menu.
  - Invalid input: A or B is not a valid number (infinity and NaN are rejected too).
  - Error: division by zero: B is 0 in a division.
  - Error: result out of range: the result is too large to store.
- **Quitting.** Option 0, or the end of the input, prints Bye!.

## Author

Mila F. Abdullah
