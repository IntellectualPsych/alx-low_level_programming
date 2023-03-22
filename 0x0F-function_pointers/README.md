This README contains the following information:

C Function Pointers: The main aim of this project is to understand how to use function pointers, what it holds and where it points in a virtual memory.  

TECHNOLOGIES

•       Tested on Ubuntu 20.04 LTS
•       C files are compiled using gcc 4.8.4
•       Tested on Ubuntu 20.04 LTS

FILES

All of the following files are programs written in C: 


Filename & Description


0. What's my name

A function that prints a name.
Prototype: void print_name(char *name, void (*f)(char *));


1. If you spend too much time thinking about a thing, you'll never get it done

A function that executes a function given as a parameter on each element of an array.
Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
where size is the size of the array
and action is a pointer to the function you need to use


2. To hell with circumstances; I create opportunities

A function that searches for an integer.
•	Prototype: int int_index(int *array, int size, int (*cmp)(int));
•	where size is the number of elements in the array array
•	cmp is a pointer to the function to be used to compare values
•	int_index returns the index of the first element for which the cmp function does not return 0
•	If no element matches, return -1
•	If size <= 0, return -1


3. A goal is not always meant to be reached; it often serves simply as something to aim at
	A program that performs simple operations
This task requires the creation of four different files.
Furthermore, this file contains all the function prototypes and data structures used by the program.



