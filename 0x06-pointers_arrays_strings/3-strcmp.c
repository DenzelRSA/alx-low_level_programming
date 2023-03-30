#include "main.h"

/**
 * _strncmp - Compare pointers to two strings.
 * @s1: A pointer to compare to first string.
 * @s2: Apointer to compare to second string.
 * Return: negative difference of unmatched characters if str1 < str2
 * if str1 == strin2, 0.
 * if strin1 > str2 then print positive number
 *
 */

int _strncmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);

}
