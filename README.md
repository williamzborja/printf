<img src="https://blog.holbertonschool.com/wp-content/uploads/2020/04/unnamed-2.png" alt="holbie" width="120">

# Printf

The objective of this project is to gather concepts learned to date and unify them in several tasks to achieve a step-by-step replica of the printf function.

## Printf function

Many programming languages implement a function printf (print formatted), to display a formatted string. This, originally from the C programming language, has a prototype similar to the following:

```
int printf(const char* format,...)
```
Where the string format provides a description of the output string according to the different variables and their writing formats.
for Example: 

```
printf("%2d", 1234);
```
- Where format is "%2d"
- Number to print 1234

## Project requirements

A summary of our requirements are:
- Use of programming language c
- Use of Betty style, which is a way in which holberton teaches us to follow certain requirements, which in professional life are necessary as the use of comments and tabs.
- All the prototypes of the functions that we will create will be included in the header called holberton.h
- Teamwork, use of a repository on github with collaborators, where they must make a balanced amount of commits.

## Project execution guide

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
int format_is_correct(char format, char type)
```
This function validate if format is correct.

```
int get_function(char type, int *i, int *count, va_list lista)
```
This function we have an array of type structure which will be traversed in search of the character that it comes with is equal to any that is in the array, if this happens the function will call the function corresponding to the character.

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
But if it does not find equality, it will return NULL.

## Flowchart

<img src="./Diagrama%20_printf.png" alt="holbie" width="100%">

## Compilation
```
	gcc -g -Wall -Werror --pedantic <...files> -o <output-file>
	./<output-file>
```
### Usage
**String**
* Specifier: `%s`
* Input:  _printf("I am a %s.\n", "string");`
* Output: `I am a string`

**Character**
* Specifier: `%c`
* Input:  `_printf("char: %c\n", 'H');`
* Output: `char: H`

**Integer**
* Specifier: `%i`
* Input:  `_printf("Number: %i\n", num);
* Output: `Number: 40`

**Decimal:**
* Specifier: `%d`
* Input:  `_printf("%d\n", 200);`
* Output: `200`

**Binary**
* Specifier: `%b`
* Input:  `_printf("%b\n", 98);`
* Output: `1100010`

**String Reverse**
* Specifier: `%r`
* Input:  `_printf("%r\n", "abcd");`
* Output: `dcba`

**ROT13**
* Specifier: `%R`
* Input:  `_printf("%R\n", "is a simple letter substitution cipher");`
* Output: `vf n fvzcyr yrggre fhofgvghgvba pvcure`

## Files

Files|Description
--|--
[_printf.c](._printf.c) | Printf Function
[_putchar.c](._putchar.c)| Write Function
[custom_functions.c](.custom_espec.c)| Custom task
[holberton.h](.holberton.h)| Header Principal
[print_functions.c](.print_functions.c)| Different function to print by data type
[README.md](.README.md)| Description project
[man_3_printf](.man_3_printf)| Manual page
[validations.c](.validations.c)| Validations functions
[get_function.c](.get_function.c)| Select and run function by type
[case_spaces.c](.case_spaces.c)| Validate edge cases, spaces

### Contributors

* [@py-cc](https://github.com/py-cc)
* [@williamzborja](https://github.com/williamzborja)
* [@dmac24](https://github.com/dmac24)
