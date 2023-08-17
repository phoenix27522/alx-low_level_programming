====> a function that returns the sum of all its parameters <====






=====> function that prints numbers, followed by a new line <=====

void print_numbers(const char *separator, const unsigned int n, ...): This is the function prototype. 
It takes three arguments: separator (the string to be printed between numbers), n (the number of integers passed to the function), and ... (ellipsis indicating a variable number of arguments).

if (separator == NULL): This condition checks if the separator string is NULL (i.e., not provided). If so, the function returns early, as it won't be able to print anything meaningful without a separator.

va_list args; va_start(args, n);: These lines declare a va_list named args and initialize it using va_start. This prepares the argument list for processing.

for (unsigned int i = 0; i < n; ++i) {: This loop iterates through each argument.

int num = va_arg(args, int);: Inside the loop, va_arg retrieves the next integer argument from the list. It advances the argument list position.

printf("%d", num);: This line prints the current integer num using printf.

if (i < n - 1) { printf("%s", separator); }: This checks if the current integer is not the last one. If not, it prints the separator string using printf.

va_end(args);: This cleans up the argument list after all the processing is done.

printf("\n");: Finally, this prints a newline character to move to the next line after printing all the numbers.
