#include <stdio.h>

/**
 * _strlen - Return thr length of a string.
 * @str: The string to get te the length of
 * Return: The length of the string.
 */

size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
