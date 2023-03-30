This README contains the following: 

0x12. C - Singly linked lists Project

Synopsis
The main aim of this task to understand When and why we use linked lists vs arrays and importantly how to build and use linked lists

Specified data structure for this project:

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

Technologies 

•       Tested on Ubuntu 20.04 LTS
•       C files are compiled using gcc 4.8.4
•       Tested on Ubuntu 20.04 LTS

FILES

All of the following files are programs written in C:
FILENAME	DESCRIPTION
0. Print list

	A function that prints all the elements of a list_t list.
•	Prototype: size_t print_list(const list_t *h);
•	Return: the number of nodes
1. List length
	A function that returns the number of elements in a linked list_t list.
•	Prototype: size_t list_len(const list_t *h)
2. Add node

	A  function that adds a new node at the beginning of a list_t list.
•	Prototype: list_t *add_node(list_t **head, const char *str);
•	Return: the address of the new element, or NULL if it failed
•	str needs to be duplicated
3. Add node at the end
	A function that adds a new node at the end of a list_t list.
•	Prototype: list_t *add_node_end(list_t **head, const char *str);
•	Return: the address of the new element, or NULL if it failed

4. Free list
	A function that frees a list_t list.
Prototype: void free_list(list_t *head)
5. The Hare and the Tortoise

	A function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\nbefore the main function is executed.
•	You are allowed to use the printf function
6. Real programmers can write assembly code in any language
	A 64-bit program in assembly that prints Hello, Holberton

Author

Damilola Babayemi 

