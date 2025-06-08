## Problem Statement

Write a C program that reads an array of integers and finds all even numbers that appear **exactly twice** in the array. The program should print each such number only once, in the order of their first occurrence.

### Requirements:
- Input:
  - An integer `n` (number of elements).
  - `n` integers representing the array.
- Output:
  - Each even number that appears exactly two times in the array.
  - Do not print duplicates in the output.

### Instructions:
- Read input into an array.
- Use nested loops to:
  - Skip duplicate checking if the number has already been processed.
  - Count how many times each even number appears.
  - Print the number only if it is even and appears exactly twice.
