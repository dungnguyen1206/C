# Problem 1 - Prime Number Triangle

## Description
Write a C program that prints a triangle of prime numbers based on a user-specified number of rows `n`.

## Input Requirements
- The user inputs a single integer `n` (number of rows), with `n > 0`.

## Output Requirements
- The program prints a triangle with `n` rows.
- The first row contains 1 prime number, the second row contains 2 prime numbers, and so on.
- Prime numbers are printed in ascending order and continue from where the previous row left off.

## Notes
- Use a helper function to check if a number is prime.
- Start printing from the first prime number: 2.
- Use nested loops: an outer loop for rows and an inner loop for the number of primes in that row.
