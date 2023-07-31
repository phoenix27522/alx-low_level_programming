/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to change.
 * @to: String to change pointer to.
 *
 * This function changes value of the pointer @s to point to the same location
 * where the string @to is stored. It does not create a new copy of the string,
 * just points the pointer @s to the same memory address where @to is stored.
 *
 * Return: None (void).
 */
void set_string(char **s, char *to)
{
	*s = to;
}
