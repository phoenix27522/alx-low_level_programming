#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c_val;
	int i_val;
	float f_val;
	char *s_val;
	unsigned int i;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == 'c')
		{
			c_val = va_arg(args, int);
			printf("%c", c_val);
		}
		else if (format[i] == 'i')
		{
			i_val = va_arg(args, int);
			printf("%d", i_val);
		}
		else if (format[i] == 'f')
		{
			f_val = va_arg(args, double);
			printf("%f", f_val);
		}
		else if (format[i] == 's')
		{
			s_val = va_arg(args, char *);
			if (s_val != NULL)
				printf("%s", s_val);
			else
				printf("(nil)");
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}

