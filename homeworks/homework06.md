## Homework 6

### C Exercises

Modify the link below so it points to the `ex06` directory in your
student repository.

[Here is a link to the ex06 directory in my repository](https://github.com/zy-feng/ExercisesInC/tree/master/exercises/ex06)

### Think OS Chapter 6 reading questions

**Memory management**

1) Which memory management functions would you expect to take constant time?
Which ones take time proportional to the size of the allocated chunk?

*Response:* `malloc` and `free` will take constant time.  `calloc` and `realloc` will take time proportional to the size.

2) For each of the following memory errors, give an example of something that might go wrong:

a) Reading from unallocated memory.

b) Writing to unallocated memory.

c) Reading from a freed chunk.

d) Writing to a freed chunk.

e) Failing to free a chunk that is no longer needed.

*Response:* a) The program might cause seg fault or get random value.

b) The program might cause seg fault or cause system panic.

c) Same as a). But it may not read data from other processes as the address is allocated before.

d) Same as b). But it may not affect other processes as the address is allocated before.

e) Memory leak


3) Run

```
    ps aux --sort rss
```

to see a list of processes sorted by RSS, which is "resident set size", the amount of physical 
memory a process has.  Which processes are using the most memory?

*Response:* `crukedsh 24174  1.0  3.4 3037912 561040 ?      Sl   Mar13  14:05 /usr/lib/firefox/firefox` My web browser.

4) What's wrong with allocating a large number of small chunks?  What can you do to mitigate the problem?

*Response:* It will cause fragmentation, which lowers the space effiency in the long term.

If you want to know more about how malloc works, read 
[Doug Lea's paper about dlmalloc](http://gee.cs.oswego.edu/dl/html/malloc.html)
