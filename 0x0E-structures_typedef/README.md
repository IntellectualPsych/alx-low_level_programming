This README contains the following:


BRIEF INFORMATION 


Structures: The main aim of the project is to understand how, why and when to use structures 


TECHNOLOGIES  


•	Tested on Ubuntu 20.04 LTS
•	C files are compiled using gcc 4.8.4
•	Tested on Ubuntu 20.04 LTS


FILES 


All of the following files are programs written in C: 


Filename  and	Description


0. Poppy	A new type struct dog with the following elements: 
name, type = char *
age, type = float
owner, type = char *
1. A dog is the only thing on earth that loves you more than you love yourself	function that initialize a variable of type struct dog
Prototype: void init_dog(struct dog *d, char *name, float age, char *owner)
2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad	A function that prints a struct dog
Prototype: void print_dog(struct dog *d)
3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read	Define a new type dog_t as a new name for the type struct dog
4. A door is what a dog is perpetually on the wrong side of	Write a function that creates a new dog.
Prototype: dog_t *new_dog(char *name, float age, char *owner); 
Store a copy of name and owner
5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg	Write a function that frees dogs. 
Prototype: void free_dog(dog_t *d);

