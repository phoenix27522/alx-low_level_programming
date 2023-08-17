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
	char *s_val, *sep = "";
	unsigned int i;

	va_start(args, format);

	i = 0;

	while (format[i])
	{
		if (format[i] == 'c')
		{
			c_val = va_arg(args, int);
			printf("%s%c", sep, c_val);
		}
		else if (format[i] == 'i')
		{
			i_val = va_arg(args, int);
			printf("%s%d", sep, i_val);
		}
		else if (format[i] == 'f')
		{
			f_val = va_arg(args, double);
			printf("%s%f", sep, f_val);
		}
		else if (format[i] == 's')
		{
			s_val = va_arg(args, char *);
			if (!s_val)
				s_val = "(nill)";
			printf("%s%s", sep, s_val);
		}
		sep = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}

