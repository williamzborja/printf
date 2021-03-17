<img src="https://blog.holbertonschool.com/wp-content/uploads/2020/04/unnamed-2.png" alt="holbie" width="120">

# Printf

The objective of this project is to gather concepts learned to date and unify them in several tasks to achieve a step-by-step replica of the printf function.

## Printf function

Many programming languages implement a function printf (print formatted), to display a formatted string. This, originally from the C programming language, has a prototype similar to the following:

```
int printf(const char* format,...)
```
where the string format provides a description of the output string according to the different variables and their writing formats.
for Example: 

```
printf("%2d",   1234);
```
- where format is "%2d"
- number to print 1234

## Project requirements

A summary of our requirements are:
- use of programming language c
- use of Betty style, which is a way in which holberton teaches us to follow certain requirements, which in professional life are necessary as the use of comments and tabs.
- all the prototypes of the functions that we will create will be included in the header called holberton.h
- Teamwork, use of a repository on github with collaborators, where they must make a balanced amount of commits.

### Project execution guide

### holberton.h file

It is our header file, which contains the prototypes of the functions and will be included in the files as follows:

```
#include "holberton.h"
```
### _printf.c file 

```
int _printf(const char *format, ...)
```
This function is the insert to go through the string format character by character and if:
- Find character, print it.
- Whenever it finds '%', it has two options, if the next character is another '%' it takes it as a character and prints; but if it finds something different it will enter the next function with the character:

```
int (*get_format(char s))(va_list)
```
where we have an array of type structure which will be traversed in search of the character that it comes with is equal to any that is in the array, if this happens the function will call the function corresponding to the character.

```
print_t  print_type[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_i},
		{'i', print_d},
		{'b', print_binary},
		{'R', rot13},
		{'r', rev_string},
		{NULL, NULL}
	};
```
but if it does not find equality, it will return NULL.

## Usage
```
	gcc -g -Wall -Werror --pedantic <...files> -o <output-file>
	./<output-file>
```

## Test

```
	./test.sh
```

## Files

Files|Description
--|--
[_printf.c](._printf.c) | Printf Function
[_putchar.c](._putchar.c)| Putchar with buffer 2048
[.gitignore](.gitignore)| Ignore files in git
[custom_espec.c](.custom_espec.c)| Custom task
[holberton.h](.holberton.h)| Header Principal
[print_functions.c](.print_functions.c)| Different function to print by data type
[README.md](.README.md)| this
[test.sh](.test.sh)| test bash script
[validations.c](.validations.c)| Validations functions

### Contributors

* [@py-cc](https://github.com/py-cc)
* [@williamzborja](https://github.com/williamzborja)
* [@dmac24](https://github.com/dmac24)
