========>  a function that fills memory with a constant byte <==========
The function `_memset` is likely a custom implementation of the standard library function `memset`. It is used to fill a block of memory with a specified value. The function takes three parameters:

1. `s`: A pointer to the memory block that needs to be filled.
2. `b`: The value (character) to be set. It will be copied to each byte of the memory block.
3. `n`: The number of bytes to fill with the specified value.

Here's an explanation of each parameter:

1. `s` (pointer to char):
   - This parameter represents the starting address of the memory block to be filled.
   - It is a pointer to the first byte of the memory block.

2. `b` (char):
   - This parameter represents the value (character) that will be copied to each byte of the memory block.
   - The value is specified as a `char` data type, but it will be implicitly converted to an unsigned char and then copied to each byte.

3. `n` (unsigned int):
   - This parameter represents the number of bytes to be filled with the specified value `b`.
   - The function will fill `n` bytes starting from the memory location pointed to by `s`.

