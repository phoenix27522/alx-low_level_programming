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

} 

==========> function that returns a pointer to a 2 dimensional array of integers <==========
int **alloc_grid(int width, int height): This is the function definition. it takes two paramaters:
width:   width of the matrix
height : height of the matrix

Inside the function {

# step -1. "int **arr;": Declares a pointer to a pointer that will be used to hold the 2D array.

# step -2. int i, j;: Declare loop variables i and j to iterate through rows and columns.

# step -3. Checks if the given height or width is non-positive. If either of them is non-positive, it returns NULL immediately, indicating an error.

# step -4. arr = (int **) malloc(sizeof(int *) * height);: Allocates memory for an array of pointers, where each pointer will point to a row in the            matrix. height determines the number of rows.

# step -5. if (arr == NULL) return (NULL);: Checks if memory allocation for the array of rows failed. If it failed, the function returns NULL to               indicate an error.

# step -6. Loop to allocate memory for each row and handle failures:This loop allocates memory for each row and initializes it to NULL if allocation           fails. If allocation fails for any row, it frees the previously allocated memory and returns NULL
# step -7. Loop to initialize each element of the matrix to 0:
# step -8. return (arr);: Returns the pointer arr, pointing to the created and initialized matrix.

