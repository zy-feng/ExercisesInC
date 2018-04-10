## Homework 9

### C Exercises

Modify the link below so it points to the `ex09` directory in your
student repository.

[Here is a link to the ex09 directory in my repository](https://github.com/YOUR_GITHUB_USERNAME_HERE/ExercisesInC/tree/master/exercises/ex09)

### Think OS Chapter 9 reading questions

1) Why does each thread have its own stack?

*Response:* Each thread may conduct their own independent execuation.

2) What does the gcc flag `-lpthread` do?

*Response:* Call pthread library during compilation.

3) What does the argument of `pthread_exit` do?

*Response:* A return value available to another thread in the same process that calls `pthread_join`.

4) Normally the same thread that created a thread also waits to join it.

What happens if another thread tries to join a thread it did not create?

*Response:* It is fine. One thread can wait for any other threads. Waiting for its parent or ancestors may be an exception.

5) What goes wrong if several threads try to increment a shared integer at the same time?

*Response:* They read the value, do the maths, and may only increament the integer not enough time.

6) What does it mean to "lock a mutex"?

*Response:* Keeping other threads from accessing the block before unlocking it.