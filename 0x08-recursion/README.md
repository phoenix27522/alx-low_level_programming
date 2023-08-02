===========> function that prints a string <==========
  # The _puts_recursion function is defined, which takes a character pointer s as input. A character pointer points to the beginning of a string.
  # Inside the function, we have a base case. We check if the current character (pointed by s) is the end of the string, which is represented by the    null terminator '\0'. If it is, we print a new line (\n) to start a new line in the output, and then we return from the function to stop further    recursion
  # If the current character is not the end of the string, we print the current character using putchar(*s). putchar is a function that prints a        single character to the standard output.where *s is the character being pointed by the pointer s.
  # After printing the current character, we call the _puts_recursion function again with the next character in the string. This is achieved by         passing s + 1 as the argument, which increments the pointer s to point to the next character in the string. This process continues recursively      until the base case is reached and the function starts returning.


==========> function that prints a string in reverse <==========

  # the putchar(*s) statement is placed after the recursive call _print_rev_recursion(s + 1). Therefore, the characters will be printed in reverse      order because the recursive calls are made first (going deeper into the recursion stack) and then the characters are printed when the recursion     is unwinding.
