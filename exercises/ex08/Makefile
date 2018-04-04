FLAGS=$(shell  pkg-config --cflags --libs glib-2.0)

ex_compile: ex_compile.c
	gcc ex_compile.c $(FLAGS) -o ex_compile

word_count: word_count.c
	gcc -o word_count word_count.c $(FLAGS)
