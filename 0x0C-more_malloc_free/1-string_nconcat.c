#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: size of the conacatinated
 * Return: pointer to the concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	/* lets calulculate len of s1 */
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	/* caluculating the length of s2 */
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	/* limiting the n to size of s2 if n is grater */
	if (n > len2)
		n = len2;

	concat = (char *)malloc(sizeof(char) * (len1 + n + 1));

	/* storing char s1 to concat*/
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	/* storing s2 to concat untill the byte of n */
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';

	return (concat);
}
