## Homework 4

### C Exercises

Modify the link below so it points to the `ex03` directory in your
student repository.

[Here is a link to the ex03 directory in my repository](https://github.com/zy-feng/ExercisesInC/tree/master/exercises/ex03)

### Think OS Chapter 4 reading questions

**Files and file systems**

1) What abstractions do file systems provide?  Give an example of something that is logically true about files systems but not true of their implementations.

*Response:* It provides the abstractions that there is a mapping relationship between file name and file contents no matter how big the file actually is.

2) What information do you imagine is stored in an `OpenFileTableEntry`?

*Response:* It stores the beginning the file and permissions of opening the file. In all, all the things OS needs to open the file.

3) What are some of the ways operating systems deal with the relatively slow performance of persistent storage?

*Response:* Block transfers, Prefetching, Buffering and Caching.

4) Suppose your program writes a file and prints a message indicating that it is done writing.  Then a power cut crashes your computer.  After you restore power and reboot the computer, you find that the file you wrote is not there.  What happened?

*Response:* The file is still in the cache, or some part of the file system that OS requires to read the file is not set yet. 

5) Can you think of one advantage of a File Allocation Table over a UNIX inode?  Or an advantage of a inode over a FAT?

*Response:* 

- In terms of inode, data is seperated from the address, which means a long way is needed to find the actual data. 
- FAT is sensetive to errors. If one of the block acting like address behaves abnormally, the whole system panics. 

6) What is overhead?  What is fragmentation?

*Response:* 

- Overhead is the data structures used by the allocator instead of actual data.
- Fragmentation is blocks that are unused or partially used.

7) Why is the "everything is a file" principle a good idea?  Why might it be a bad idea?

*Response:* Reusing the file abstraction makes life easier for programmers. It also makes
programs more versatile.

If you would like to learn more about file systems, a good next step is to learn about journaling file systems.  
Start with [this Wikipedia article](https://en.wikipedia.org/wiki/Journaling_file_system), then 
[Anatomy of Linux Journaling File Systems](http://www.ibm.com/developerworks/library/l-journaling-filesystems/index.html).  
Also consider reading [this USENIX paper](https://www.usenix.org/legacy/event/usenix05/tech/general/full_papers/prabhakaran/prabhakaran.pdf).



