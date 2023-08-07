==========> function that creates an array of chars, and initializes it with a specific char <==========
char *create_array(unsigned int size, char c): This is the function definition. It takes two parameters:

size: An unsigned integer indicating the size of the array to create.
c:    A character that will be used to initialize all elements of the array.

Inside the function{

# step -1. Check if the size is zero. If it is, the function returns NULL, indicating an error.

# step -2. Allocate memory for the array using the malloc function. The size of memory allocated is sizeof(char) * size, which corresponds to the              size of a single character multiplied by the specified size.

# step -3. Check if the memory allocation was successful. If malloc returns NULL, it means that memory allocation failed, and the function                     returns NULL.

# step -4. Use a loop to iterate over each index of the allocated memory and set the value at that index to the specified character c.

# step -5. After initializing all elements of the array, set the element at index i (which now points to the first element after the loop) to the              null character '\0', effectively terminating the array as a C-style string.

# step -6. Return a pointer to the beginning of the allocated memory, which represents the created array.
