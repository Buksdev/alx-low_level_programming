#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name through passed in function pointer
 * @name: character string
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
