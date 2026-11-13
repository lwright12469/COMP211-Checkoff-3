# COMP211-Checkoff-3
Materials for the COMP211 checkoff 3 project/presentation on compiler optimizations.

## Introduction
Compiler Optimizations are changes made to source code during compile time that improve performance while preserving behavior. There are many ways that a compiler optimization might be done, such as cutting redundant code, completing calculations before run time, improving locality of reference, parallelization, etc. The goal is to speed run time, but this results in a tradeoff with compile time and code size, so a programmer must select which optimizations to use mindfully.
## Flags
There are many different options for optimizations. They are often grouped into flags, which are -O0, -O1, -O2, -O3, -Ofast, -Os, and -Og. These groups of optimizations all have different priorities and apply different sets of optimizations, resulting in a tradeoff between compile time and run time. The best choice of a flag depends on the actual content of a program, how much the user is willing to increase compile time, and possibly on the system that the program will run on. 
## Two Example Techniques
There are many different compiler optimizations. In this presentation we explore two types.
### Dead Code Elimination (DCE)
Dead Code Elimination is an optimization in which the compiler removes unreachable or unused code. This might include code after a return statement, variables that are written to but never read, or functions that are never called. This reduces the size of the code and improves readability.
### Loop Optimization
Loop optimizations are, as the name suggests, modifications to loops. This could include running multiple iterations at once, reducing the frequency of jumps, or splitting a loop into two. These optimizations can create a lot of additional overhead, which means they’re usually slower at runtime for programs with simple loops, but they can be significantly faster for very large or complex loops.
## Most Interesting Discoveries
I selected this topic because I had no idea what compiler optimization meant, and was excited to learn something totally new to me. As it turns out, there were a lot of blind spots and places where I struggled, but that made for some fascinating discoveries. 

I still have a lot to learn about memory. Before starting this project, I didn’t actually know the difference between cache and main memory, much less what locality of reference was, but it quickly became apparent that this is a big deal for making efficient programs. I’d never considered the impact of grouping memory retrievals, reducing conditionals, or reducing code size while programming, and I think it’s given me a lot to think about when designing my own programs going forward. Comparing -O2 and -O3 was fascinating, and overall I understand what the CPU does better.

I spent a lot of time trying to understand all the different optimizations that make operations run simultaneously. Parallelization, scheduling, and vectorization were hard to distinguish while I was still learning. These are all derived from the same idea: if we have idle processing power, put it to work! Now I can explain that parallelization spreads simultaneous work across multiple cores, vectorization spreads work within one core, and scheduling reorders instructions so that there is less waiting time for operations that must wait on a previous instruction. 
