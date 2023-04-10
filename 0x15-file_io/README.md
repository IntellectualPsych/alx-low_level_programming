This README contains the following: 

0x15. C - File I/O Task 

Synopsis

The main aim of this task to understand what files descriptors are, the 3 standard file descriptors, their use and purpose and importantly their POSIX names. 

Through this task, I will learn how to create, open, read and write files; What is a system call, the differences between a function and a system call and also, how to use the I/O system calls 

In addition, I will learn how to navigate and know how to use the flags O_RDONLY, O_WRONLY, O_RDWR

Finally, I’ll navigate file permissions and learn how to set them when creating a file with the open system call

Technologies 

•       Tested on Ubuntu 20.04 LTS
•       C files are compiled using gcc 4.8.4
•       Tested on Ubuntu 20.04 LTS

Files 

All of the following files are programs written in C:

FILENAME	DESCRIPTION


0. Tread lightly, she is near


	Write a function that reads a text file and prints it to the POSIX standard output.
•	Prototype: ssize_t read_textfile(const char *filename, size_t letters);
•	where letters is the number of letters it should read and print
•	returns the actual number of letters it could read and print
•	if the file can not be opened or read, return 0
•	if filename is NULL return 0
•	if write fails or does not write the expected amount of bytes, return 0


1. Under the snow

	Create a function that creates a file
•	Prototype: int create_file(const char *filename, char *text_content);
•	where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
•	Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
•	The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
•	if the file already exists, truncate it
•	if filename is NULL return -1
•	if text_content is NULL create an empty file


2. Speak gently, she can hear


	Write a function that appends text at the end of a file.
•	Prototype: int append_text_to_file(const char *filename, char *text_content);
•	where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file
•	Return: 1 on success and -1 on failure
•	Do not create the file if it does not exist
•	If filename is NULL return -1
•	If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file


3. cp

	Write a program that copies the content of a file to another file.
•	Usage: cp file_from file_to
•	if the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error
•	if file_to already exists, truncate it
•	if file_from does not exist, or if you can not read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
o	where NAME_OF_THE_FILE is the first argument passed to your program
•	if you can not create or if write to file_to fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
o	where NAME_OF_THE_FILE is the second argument passed to your program
•	if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error
o	where FD_VALUE is the value of the file descriptor
•	Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions
•	You must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer


4. elf

	Write a program that displays the information contained in the ELF header at the start of an ELF file.
•	Usage: elf_header elf_filename
•	Displayed information: (no less, no more, do not include trailing whitespace)
o	Magic
o	Class
o	Data
o	Version
o	OS/ABI
o	ABI Version
o	Type
o	Entry point address
•	Format: the same as readelf -h (version 2.26.1)
•	If the file is not an ELF file, or on error, exit with status code 98 and display a comprehensive error message to stderr


Author

Damilola Babayemi 



