## Homework 7

### C Exercises

Modify the link below so it points to the `ex07` directory in your
student repository.

[Here is a link to the ex07 directory in my repository](https://github.com/zy-feng/ExercisesInC/tree/master/exercises/ex07)

### Think OS Chapter 7 reading questions

### Caching

1) What happens if a program writes a new value into the program counter?

*Response:* CPU will executes a line of program specified by the new value.

2) What is the fundamental problem caches are meant to solve?

*Response:* The lower level storage devices cannot handle the need of fast data access. Caches provide shorter response time but only part of the complete storage.

3) If cache access time is 1 ns and memory access time is 10 ns, what is the average
access time of a program with hit rate 50%?  How about 90%?

*Response:* 50% - 1\*50%+10\*50%=5.5ns; 90% - 1.9ns

4) The book gives several examples of programming language features, like loops, that tend 
to improve locality in the access pattern of instructions and/or data.  Can you think of other examples?  
Or counter-examples that might decrease locality?

*Response:* Recursive accesses may increase locality and if-then-else may decrease locality.

5)  If you refactor a program to improve locality, would you say the program is "cache aware"?  Why not?

*Response:* No. The layer between program and hardware keeps program from being aware of cache functionalities. The program does not actually know how the hardware runs it.

6) See if you can estimate the cost of a memory cache by comparing the prices of two similar CPUs with 
different cache sizes.

*Response:* The average access time of DRAM is 1000 times faster than SSD and the cost is 10 times. As the cache is 10 times faster than DRAM so the cost is 0.1 times more. This means the average cost is about $0.03/B

7) Why are cache policies generally more complex at the bottom of the memory hierarchy?

*Response:* Because lower level caches are slower which means it allows more complex algorithms to optimize itself.

8) Can you think of a strategy operating systems could use to avoid thrashing or recover when it occurs?

*Response:* Block or kill processes when they thrash. It is hard to recover programs when they thrash.

 

