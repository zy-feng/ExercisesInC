# Exercise 1 Response

### Basics of compilation

The goal of this exercise is to help you get your programming environment
set up, and to give you some practice with the error messages.

1.  In this directory, use the text editor of your choice to create a new file
    named `cards.c`.

    *Response:* See `cards.c`.

See: [The Best Programming Text Editor for
Linux](http://lifehacker.com/5911460/the-best-programming-text-editor-for-linux)

2.  Type in the code example on page 37 of *Head First C*.  Typing in
    code is boring, but it will give you a chance to make some errors and
    debug them, so I think it is worth it.  If you disagree, feel free to
    collaborate.

    *Response:* See `cards.c`.

3.  Compile and run the program.

    *Response:* Type `make bare` in the current directory.

4.  Add it to the repo and check it in.

    *Response:* `.gitignore` and other files have been committed to the repo.

5.  In its current form, the program is one giant function.  Refactor
      it, splitting it into at least three functions with well designed
      interfaces.  See if the refactoring creates opportunities to improve
      the quality of the code.  Write comments that document each function.

    *Response:* See `cards.c`.

6.  I suggest you follow the code style demonstrated in the book,
      so you should lay out your code like what you see there.  Use line
      breaks to make sure your code fits into 80 columns.

In general, every program you write should include:

* A top-level comment that describes what's in the file and includes
   your name and any relevant copyright and license information.

* A comment before each function explaining what it does.  The content
   and format should be similar to this:

```
    /* Prompts the user for input and puts the reply in the given buffer.

       User input is truncated to the first two characters.

       prompt: string prompt to display
       card_name: buffer where result is stored
    */
    void get_card_name(char *prompt, char *card_name)
```

 	*Response*: See `cards.c`.
7. While working on this exercise, you probably made errors and saw
     some of the C compiler's error messages.  Take some time to make more
       errors so you see as many error messages as possible.

Some tips that might help you debug C programs:

*  If a program contains a syntax error, it throws off the compiler,
   often causing it to generate a long cascade of additional error
   messages, even if there are no additional errors.  In general, only
   the first error message is reliable.

*  The C compiler can tell you the location in the program where it
   realized that something was wrong, but that is not always where the
   error is.

*  Error messages contain useful information, so don't ignore them.  At
   the same time, you should not take them too seriously.  Finding
   errors requires a combination of reading errors messages and
   looking carefully at the code.

   *Response*: Bugs have been tested, and `cards.c` is now bugless.

When you are working with a new programming language, you should get
in the habit if compiling and testing often.


8. Once your program is working and compiles without generating any
     error messages or warnings, compile your program again using these
       flags

```
    gcc -ansi -pedantic -Wall cards.c
```

Look up what these flags do.  Did you get additional warnings?  See if
you can get your program to compile cleanly with these flags.

​	*Response*: Type `make flags` in the current directory. The program complains that 

```
cards.c: In function ‘main’:
cards.c:64:5: warning: ISO C90 forbids mixed declarations and code [-Wdeclaration-after-statement]
     int val = translate(card_name);
     ^
```

​	To solve it, we modify the codes around line 64. The flags ask the compiler to strictly follow ANSI standards, restrict any exceptions and print all warning information.

9.  Check your modified program into the repo.

    *Response*: Any modifications are available in the repo.

### Optimization

1.  In this directory, you should find a file named `hello.c`.  Compile and
    run it, then add the following line at the beginning of `main`:

```
    int x = 5;
```

Compile and look at the assembly language output (see [this section of
*Think OS*](http://greenteapress.com/thinkos/html/thinkos002.html#toc8).
Can you find the code that corresponds to this line?

2. What happens if you turn on optimization using the flag `-O2`?

3. Modify the `printf` statement to print `x`, then compile it with and
     without optimization.  What effect does it have when you print `x`?

4. Add

```
    int y = x + 1;
```

And then print the value of `y` (but not `x`).  Compile with and without
optimization.  What happens to `x` and `y`?

What conclusions can you draw about how optimization works?

5. Add comments to the code to explain these experiments and the results,
     then check in the final version.
