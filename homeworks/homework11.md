## Homework 11

### C Exercises

Modify the link below so it points to the `ex11` directory in your
student repository.

[Here is a link to the ex11 directory in my repository](https://github.com/zy-feng/ExercisesInC/tree/master/exercises/ex11)

### Think OS Chapter 11 reading questions

1) Why is is a bad idea to pass a `sem_t` as a parameter?

*Response:* `sem_t` is a crazy structure. It is not a good idea to pass the entire structure as a parameter. And for variables of type like `sem_t`, the operation of copy is quite wrong.

2) When you use a Semaphore as a mutex, what should its initial value be?

*Response:* 1.

3) Can you think of another use for a Semaphore where you might use a different initial value?

*Response:* If we are aimed at letting `n` threads enter the critical region, we need a semaphore initialized as `n`.

4) In my solution to the producers-consumers problem using Semaphores,
what does it mean if the value of `queue->spaces` is `3` at some point in time?

*Response:* Another 3 threads may run `queue_push`.

5) What does it mean if `queue->spaces` is `-3`?

*Response:* Another 3 threads are waiting to run `queue_push`.

6) Why doesn't `queue_pop` have to use `queue_empty` to check whether the queue is empty?

*Response:* The semaphore will pause the program if there is no item in the queue.

7) Any problem that can be solved with Semaphores can also be solved with mutexes and condition variables.
How can you prove that that's true?

*Response:* A semaphore can be implemented with mutexes and condition variables.

8) What is Property 3?  Hint: see *The Little Book of Semaphores*, 
[Section 4.3](http://greenteapress.com/semaphores/LittleBookOfSemaphores.pdf). 

*Response:* Property 3: if there are threads waiting on a semaphore when a thread executes signal, then one of the waiting threads has to be woken.




