This README contains the following:

 
0x13. C - More singly linked lists


Synopsis


The main aim of this task to understand When and why we use linked lists and importantly how to build and use linked lists

User defined data type struct
Understanding of pointers
Dynamic memory allocation
malloc
free
Understanding functions
Pass by value
Pass by reference


Specified data structure for this project:


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;



Technologies 

•       Tested on Ubuntu 20.04 LTS
•       C files are compiled using gcc 4.8.4
•       Tested on Ubuntu 20.04 LTS


FILES

All of the following files are programs written in C:


FILENAME	DESCRIPTION


0. Print list

	A function that prints all the elements of a list_t list.
•	Prototype: size_t print_listint(const listint_t *h);
•	Return: the number of nodes

1. List length
	A function that returns the number of elements in a linked list_t list.
Prototype: size_t listint_len(const listint_t *h);

2. Add node

	A function that adds a new node at the beginning of a listint_t
list.
•	Prototype: listint_t *add_nodeint(listint_t **head, const int n);
•	Return: the address of the new element, or NULL if it failed

3. Add node at the end

	A function that adds a new node at the end of a listint_t list.
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
•	Return: the address of the new element, or NULL if it failed

4. Free List

	A function that frees a listint_t
list.
Prototype: void free_listint(listint_t *head);

5. Free 

	A function that frees a listint_t
list.
Prototype: void free_listint2(listint_t **head);

5. The Hare and the Tortoise

	A function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\nbefore the main function is executed.
•	You are allowed to use the printf function

6. Pop

	A function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

7. Get node at index

	A function that returns the nth node of a listint_t linked list.

8. Sum list

	A function that returns the sum of all the data (n) of a listint_t linked list.

9. Insert

	A function that inserts a new node at a given position.

10. Delete at index
	A function that deletes the node at index index of a listint_t linked list.

11. Reverse list	A function that reverses a listint_t linked list.

12. Print (safe version)
	A function that prints a listint_t linked list

13. Free (safe version)	A function that frees a listint_t list.

14. Find the loop	A function that finds the loop in a linked list.


Author

Damilola Babayemi 

