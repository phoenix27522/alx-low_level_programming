#include "main.h"

/**
 * str_checker - check if two strings are identical.
 * @s1: char input wich is pointer.
 * @s2: char input which is pointer.
 * @indx1: s1 index.
 * @indx2: s2 index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int str_checker(char *s1, char *s2, int indx1, int indx2)
{
	if (s1[indx1] == '\0' && s2[indx2] == '\0')
		return (1);
	if (s1[indx1] == s2[indx2])
		return (str_checker(s1, s2, indx1 + 1, indx2 + 1));
	if (s1[indx1] == '\0' && s2[indx2] == '*')
		return (str_checker(s1, s2, indx1, indx2 + 1));
	if (s2[indx2] == '*')
		return (str_checker(s1, s2, indx1 + 1, indx2) || str_checker(s1, s2, indx1, indx2 + 1));
	return (0);
}
/**
 * wildcmp - check if strings could be considered identical
 * @s1: char input (pointer)
 * @s2: char input (pointer)
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
