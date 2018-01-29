## Homework 1

### C Exercises

Modify the link below so it points to the `ex01` directory in your
student repository.

[Here is a link to the ex01 directory in my repository](https://github.com/zy-feng/ExercisesInC/tree/master/exercises/ex01)

### Think OS Chapter 1 reading questions

For each of the reading questions below, write answers in the form of
a clear, concise, complete sentence or two.

1) Give an example of a feature common in interpreted languages that is rare in compiled languages.

*Answer:* Dynamic typing is common for interpreted languages but not compiled languages. For example, Python supports dynamic typing but C does not.

2) Name two advantages of static typing over dynamic typing.

*Answer:* The compiler always checks whether the variables meet their declared types at any time. Also, declaring types at compile time saves space. 

3) Give an example of a static semantic error.

*Answer:* One declares a function with single input of the type `int` and single output with no output (`void`), but when he tries to apply the function, he decides to use `int` to catch the return value. 

4) What are two reasons you might want to turn off code optimization?

*Answer:* When you are in the middle of development and want make debugging easy. When you have a subtle bug in optimized program and want to debug it.

5) When you run `gcc` with `-S`, why might the results look different on different computers?

*Answer:* Different computers may have different architecture, which results in different machine codes.

6) If you spell a variable name wrong, or if you spell a function name wrong, the error messages you get might look very different.  Why?

*Answer:* The error meesage depends on how one misspells the name. Sometimes, the wrong function name hits another function but whether differnt input/output types; sometimes, the wrong function name makes the linker confused in loading available functions.

7) What is a segmentation fault?

*Answer:* It is the error when one tries to read or write an incorrent(unavailable) location in memory.