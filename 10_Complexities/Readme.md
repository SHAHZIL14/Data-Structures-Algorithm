Time and Space Complexity - Data Structures and Algorithms (DSA) Series
This repository contains notes and concepts covering the fundamentals of Time and Space Complexity, a critical pillar in competitive programming and technical interview preparation.

Overview
Understanding how algorithms perform as input size increases is essential for building efficient systems. This guide breaks down how to analyze code performance and select optimal solutions.

Key Concepts
Time Complexity
Time complexity measures the relationship between the input size and the number of operations performed by an algorithm. We focus on the Worst-Case Scenario (the upper bound) to ensure our code remains reliable regardless of the input data.

Big O Notation: The mathematical notation used to describe the limiting behavior of a function. It helps us compare the efficiency of different algorithms.
Space Complexity
Space complexity analyzes the amount of memory an algorithm requires relative to the input size. This includes both the input itself and any additional (auxiliary) space used during execution.

Common Time Complexities
We categorize algorithms based on their growth rate as input (
) increases:

O(1) - Constant Time: Operations do not depend on the input size.

O(log n) - Logarithmic Time: Search space is halved in each step (e.g., Binary Search).

O(n) - Linear Time: Execution time grows proportionally to the input size.

O(n log n) - Linearithmic Time: Typical for efficient sorting algorithms like Merge Sort.

O(n^2) - Quadratic Time: Common in nested loops (e.g., Bubble Sort).

O(n^3) - Cubic Time: Typical for three nested loops.

O(2^n) & O(n!) - Exponential/Factorial Time: Often seen in recursive brute-force approaches.

Advanced Analysis
Recursion: We analyze recursive algorithms using recursion trees and call stacks. We calculate the total number of calls multiplied by the work done in each call.
Practical Usage:

Competitive Programming Limits: Most online platforms can handle approximately 10^8 operations per second.
Constraint Matching: By looking at problem constraints (e.g., if
), we can estimate the required complexity (e.g.,
) to avoid Time Limit Exceeded (TLE) errors.


Summary
Learning to estimate complexity is not just theoretical; it is a practical skill for every developer. These concepts will be applied and practiced across every future data structure and algorithm discussed in this series.
