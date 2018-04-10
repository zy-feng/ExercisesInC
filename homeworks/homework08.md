## Homework 8

### C Exercises

Modify the link below so it points to the `ex08` directory in your
student repository.

[Here is a link to the ex08 directory in my repository](https://github.com/zy-feng/ExercisesInC/tree/master/exercises/ex08)

### Think OS Chapter 8 reading questions

**Multitasking**

1) What is the kernel's most basic task?

*Response:* To handle interrupts.

2) When an interrupt occurs, what part of the hardware state is saved by hardware?

*Response:* The program counter.

3) What is the difference between an interrupt and a context switch?

*Response:* Interrupt 'pauses' the process and context switch 'switches' the computer into another process. They do different things and are actually belong to different stages.

4) Give an example of an event that might cause a process to move from the blocked to the ready state.

*Response:* An I/O bound program finishes its interaction. 

5) Why might a scheduler want to give higher priority to an I/O bound process?

*Response:* Because I/O bound process needs time for the users to interact with the computer, which is often longer than CPU time. If the scheduler doesn't give priority to I/O bound process, users have to wait for both CPU bound process and I/O bound process.

6) When I make French toast, I usually make a batch of 12 slices.  But my griddle only has room for 8 slices. 
Each piece of toast has to cook for 5 minutes on each side.  How can I schedule 12 slices onto 8 "cores"
to minimize the elapsed time to cook all 12 slices?  (Note: this question is not hypothetical; 
this is really how I make French toast.)

*Response:* Number the toast as 1~12. Cook Disk A of 1~8, and then Disk B of 5~12, and finally Disk A of 1~4 as well as Disk B of 9~12. This takes 15 minutes.



