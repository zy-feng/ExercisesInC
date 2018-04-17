## Homework 10

### C Exercises

Modify the link below so it points to the `ex12` directory in your
student repository.  That's right, Homework 10 is to do Exercise 12.

[Here is a link to the ex12 directory in my repository](https://github.com/zy-feng/ExercisesInC/tree/master/exercises/ex12)

### Think OS Chapter 10 reading questions

1) What does it mean to say that a data structure is thread safe?

*Response:* When the status of the data structure is predictable and stable however the threads are running.

2) In the circular buffer implementation of a queue, why is the maximum number of elements in the queue `n-1`, if `n` is the size of the array?

*Response:* If one more element is added to the queue, the queue is interpreted as empty.

3) If there is no mutex to protect the queue, give an example of a sequence of steps that could leave the queue in an inconsistent state.

*Response:* If one thread is to find the value of the last element, and another one is to insert a value into it, then if there is no mutex, there is some chance that the first operation will get the last element but one.

4) When a thread calls `cond_wait`, why does it have to unlock the mutex before blocking?

*Response:* If it doesn't do so, other threads have no access to the queue, then there is not possibly any change made to it.

5) When a thread returns from `cond_wait`,  what do we know is definitely true?  What do we think is probably true?

*Response:* Definitely, the thread is safe now. Probably, the condition is true.

6) What happens if you signal a condition variable when there are no waiting threads?

*Response:* Nothing happens.

7) Do you have to lock the mutex to signal a condition variable?

*Response:* No. The data structure of condition variable is thread safe, and it takes time to do so.

8) Does the condition have to be true when you signal a condition variable?

*Response:* No. The step of signaling implies nothing about the condition.




