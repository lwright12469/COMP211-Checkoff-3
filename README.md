# COMP211-Checkoff-3
Materials for the COMP211 checkoff 3 project/presentation on compiler optimizations.

## Introduction
Compiler Optimizations are changes made to source code during compile time that improve performance while preserving behavior. It may reduce redundant code, complete constant calculations during compile time instead of run time, improve locality of memory, parallelization, and other things to “clean” and optimize code.
## Flags
There are many different options for optimizations. They are often grouped and run as seven flags in gcc and clang, which are -O0, -O1, -O2, -O3, -Ofast, -Os, and -Og. These all have different priorities and apply different optimizations, resulting in a tradeoff between compile time and run time.
## Two Example Techniques
### Dead Code Elimination (DCE)
Dead Code Elimination is when the compiler removes unreachable or unused code. This might include code after a return statement, variables that are written to but never read, or functions that are never called. This reduces the size of the code and improves readability.
### Loop Optimization
Loop optimizations are, as the name suggests, modifications to loops. This could include running multiple iterations at once, reducing the frequency of checking loop conditions, or splitting a loop into two for better locality of reference. These optimizations are actually slower at runtime for many programs, but much faster for other applications. 
## Most Interesting Discoveries
Before starting this project, I didn’t know how locality of reference worked. It was surprising to discover that the size of code after compiling can affect performance, since I had initially assumed that all of the memory pertaining to a program was equally accessible. Since learning about the cache and comparing -O2 and -O3, I feel as though I have a much better understanding of what the CPU does and the considerations that go into optimizing.
