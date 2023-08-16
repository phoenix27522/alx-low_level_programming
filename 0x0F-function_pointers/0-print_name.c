#include "function_pointers.h"
#include "stdio.h"
/**
 * print_name - prints name
 * @name: pointer to name
 * @f: pointer function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	f(name);
}
