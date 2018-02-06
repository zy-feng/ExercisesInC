# Exercise 2
## Pointers


### The address space

1. Compile and run `aspace.c` in this directory.

   *Response:* `gcc -o aspace aspace.c`

2. Read the code.  You might want to [read about malloc here](https://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm).

3. Based on the output, draw a sketch of the virtual address space (see page 80 of HFC).  Show the relative locations of the stack, heap, globals, constants, and code.

   *Response:* The output is as follows.

   ```
   Address of main is 0x4005d6
   Address of var1 is 0x60104c
   Address of var2 is 0x7fff2c530e74
   Address of p is 0xdd5010
   Address of s is 0x400714
   ```

   Thus, 

   | stack     | 0x7fff2c530e74 |
   | --------- | -------------- |
   | heap      | 0xdd5010       |
   | global    | 0x60104c       |
   | constants | 0x400714       |
   | code      | 0x4005d6       |

4. Add a second call to `malloc` and check whether the heap on your system grows up (toward larger addresses).  

   *Response:* By adding `void *q = malloc(128);` The output is as follows.

   ```
   Address of main is 0x4005d6
   Address of var1 is 0x60104c
   Address of var2 is 0x7ffc8cbb73fc
   Address of p is 0x1a8e010
   Address of q is 0x1a8e0a0
   Address of s is 0x400744
   ```

   This shows that the heap grows up.

5. Add a function that prints the address of a local variable, and check whether the stack grows down.  

   *Response:* By adding `int var3 = 6;` The output is as follows.

   ```
   Address of main is 0x4005d6
   Address of var1 is 0x60104c
   Address of var2 is 0x7fffd94f7698
   Address of var3 is 0x7fffd94f769c
   Address of p is 0xad5010
   Address of q is 0xad50a0
   Address of s is 0x400754
   ```

   This shows that the heap grows up.

6. Choose a random number between 1 and 32, and allocate two chunks with that size.  
     How much space is there between them?  Hint: Google knows how to subtract hexadecimal numbers.

*Response:* When the number is less than or equal to 24, the difference is 0x20, a.k.a 32 bytes; otherwise it's 0x30, 48 bytes.

  


### Stack allocated data

1.  Read `stack.c`, which should be in this directory.  What is it
    intended to do?  What would the output be if the program worked as
    expected?

    *Response:* I think it tries to test the memory allocated in stack.

2.  Compile it.  Do you get a warning?  What does it mean?

    *Response:* It shows the following

    ```
    stack.c: In function ‘foo’:
    stack.c:22:12: warning: function returns address of local variable [-Wreturn-local-addr]
         return array;
    ```

    It means the function returns a value belonging to local stack. It is not promised to work well outside the function.

3.  Run it.  What happens?  You might get a segmentation fault, or you might get
    some strange output.  Can you explain it?  You might find it
    helpful to draw a stack diagram.

    *Response:* It shows the following 

    ```
    Segmentation fault
    ```

    The function is looking for address of which the stack has been destroyed.

4.  Comment out the `print` statements in `foo()` and `bar()` and run
    it again.  What happens now?

    *Response:* It still shows seg fault plus two pointers. The program runs the two lines and gets a seg fault.

5.  Add comments to the code to explain these experiments and the results,
    then check the code in to the repo.

Moral: Don't return pointers to stack allocated data!


### Write some code

Create a file named `adder.c` and write a program that allows the user to enter integers, one per line, until the user hits Control-D, which is the end-of-file (EOF) character.

It should convert the numbers from input strings to integers and store the integers in an array.  The program should produce appropriate error messages if the user enters something that exceeds the length of the input buffer, or can't be converted to an integer.  It should also produce an error message if the user enters more numbers than will fit in the array.

After the user enters Control-D, the program should add up the numbers in the array and print the result.  

Your program should be divided into at least two functions with well designed interfaces.

Optionally, the program should produce an error if the sum exceeds the largest integer that can be represented.

Hint: You will probably want to use two functions we haven't seen yet:

* strlen: [Read about it here](https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm)

* atoi: [Read about it here](https://www.tutorialspoint.com/c_standard_library/c_function_atoi.htm)

Before you use there functions, you need to `#include <string.h>`.
