## Homework 5

### C Exercises

Modify the link below so it points to the `ex05` directory in your
student repository.

[Here is a link to the ex05 directory in my repository](https://github.com/zy-feng/ExercisesInC/tree/master/exercises/ex05)

### Think OS Chapter 5 reading questions

**Bits and bytes**

1) Suppose you have the value 128 stored as an unsigned 8-bit number.  What happens if you convert 
it to a 16-bit number and accidentally apply sign extension?

*Response:* `128` is `b1000000` in unsigned 8-bit. When sign extension is applied, multiple `1`s will be found at the beginning, which makes the original number negative.

2) Write a C expression that computes the two's complement of 12 using the XOR bitwise operator. 
Try it out and confirm that the result is interpreted as -12.

*Response:* `12^-1=-12`.

3) Can you guess why IEEE floating-point uses biased integers to represent the exponent rather than a
sign bit or two's complement?

*Response:* In order to represent a large range of numbers out of exponent.

4) Following the example in Section 5.3, write the 32-bit binary representation of -13 in single precision 
IEEE floating-point.  What would you get if you accidentally interpreted this value as an integer?

*Response:* 13 is `1.101*2^3`, with the exponent of 3, with 130 as the bias. It is `11000001010100000000000000000000`. It is a large negative integer if it is interpreted as an signed one, and a large integer if unsigned one.

5) Write a function that takes a string and converts from lower-case to upper-case by flipping the sixth bit.  
As a challenge, you can make a faster version by reading the string 32 or 64 bits at a time, rather than one
character at a time.  This optimization is made easier if the length of the string is a multiple of 4 or 8 bytes.

*Response:* 

```c
void to_upper(char* str) {
	char * res = malloc(sizeof(char) * strlen(str));
	int i;
  	for (i = 0; i < strlen(str); i++) {
		res[i] = str[i] ^ 0b00100000;
	}
	printf("%s", res);
}
```



