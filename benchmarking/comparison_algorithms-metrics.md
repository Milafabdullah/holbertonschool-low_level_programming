]633;E;echo "# Algorithmic efficiency comparison";84c112cf-8abf-4e31-8f9a-d528012ac118]633;C# Algorithmic efficiency comparison

Compiled with:

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 comparison_algorithms.c -o comparison_algorithms

## Raw runs

### Run 1

    Naive algorithm result: 625025000
    Naive algorithm time: 1.475718 seconds
    Single-pass algorithm result: 25000
    Single-pass algorithm time: 0.000064 seconds

### Run 2

    Naive algorithm result: 625025000
    Naive algorithm time: 1.338258 seconds
    Single-pass algorithm result: 25000
    Single-pass algorithm time: 0.000044 seconds

### Run 3

    Naive algorithm result: 625025000
    Naive algorithm time: 1.331677 seconds
    Single-pass algorithm result: 25000
    Single-pass algorithm time: 0.000044 seconds

### Run 4

    Naive algorithm result: 625025000
    Naive algorithm time: 1.376553 seconds
    Single-pass algorithm result: 25000
    Single-pass algorithm time: 0.000044 seconds

### Run 5

    Naive algorithm result: 625025000
    Naive algorithm time: 1.413544 seconds
    Single-pass algorithm result: 25000
    Single-pass algorithm time: 0.000068 seconds

## Averages (5 runs)

    Naive algorithm average: 1.387150 seconds
    Single-pass algorithm average: 0.000053 seconds

## Relative difference

The naive implementation is ~26272 times slower than the single-pass implementation.
