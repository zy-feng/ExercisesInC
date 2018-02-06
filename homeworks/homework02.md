## Homework 2

### C Exercises

Modify the link below so it points to the `ex02` directory in your
student repository.

[Here is a link to the ex01 directory in my repository](https://github.com/zy-feng/ExercisesInC/tree/master/exercises/ex02)

### Think OS Chapter 2 reading questions

For each of the reading questions below, write answers in the form of
a clear, concise, complete sentence or two.

1. Give a real-world example of virtualization (ideally not one of 
  the ones in the book).  What is abstractly true about the system that
  is not literally true about the implementation?

  *Response:* When we run things in the computer, there is virtualization that all the programs(processes) are running at the same time. Actually, it's not. Only one thread can run in one core, and there are scheduling algorithms adjusting theirpriorities. 

2. What is the difference between a program and a process?

   *Response:* A process is a software object that represents a running program. Usually one process runs one program, but it is also possible for a process to load and run a new program. It is also possible, and common, to run the same program in more than one process.

3. What is the primary purpose of the process abstraction? 

   *Response:* To allow programmers to implement programs without knowing much about how the capabilities are implemented.

4. What illusion does the process abstraction create?

   *Response:* Every process has a separate/isolated memory, device and other resources.

5. What is the kernel?

   *Response:* The part of the operating system responsible for core capabilities like creating
   threads.

6. What is a daemon?

   *Response:* Processes that run in the background and provide operating system services.
