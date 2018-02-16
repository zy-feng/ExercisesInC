## Homework 3

### C Exercises

Modify the link below so it points to the `ex02.5` directory in your
student repository.

[Here is a link to the ex02.5 directory in my repository](https://github.com/zy-feng/ExercisesInC/tree/master/exercises/ex02.5)

### Think OS Chapter 3 reading questions

### Virtual memory

1) The Georgian alphabet has 33 letters.  How many bit are needed to specify a letter?

*Response:* 6. As `2^5=32<33` and `2^6=64>33`.

2) In the UTF-16 character encoding, the binary representation of a character can take up to 32 bits.  
Ignoring the details of the encoding scheme, how many different characters can be represented?

*Response:* `2^32=4294967296`.

3) What is the difference between "memory" and "storage" as defined in *Think OS*?

*Response:* Memory is stored in a memory card, while storage is stored in a storage device, like hard drive, CD, etc. Memory will be gone if the computer shuts down but storage will not. 

4) What is the difference between a GiB and a GB?  What is the percentage difference in their sizes?

*Response:* `1GiB=2^30 bytes` and `1GB=10^9 bytes`. The percentage difference with respect to GB is `7.36%`.

5) How does the virtual memory system help isolate processes from each other?

*Response:* As TLB generates map from virtual address to physical address so it is impossible to refer the address belonging to another process. 

6) Why do you think the stack and the heap are usually located at opposite ends of the address space?

*Response:* The stack and heap are both growing. The designer of the computer (OS?) does not know whether the user program will rely on stack more or the heap more. 

7) What Python data structure would you use to represent a sparse array?

*Response:* Dictionary. We use maps to refer to each entry.

8) What is a context switch?

*Response:* When a scheduling algorithm decides that one of the processes should be interrupted, it gives the process an interrupt, and runs another process. 