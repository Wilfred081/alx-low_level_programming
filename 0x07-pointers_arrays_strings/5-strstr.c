#include "main.h"
#include <stdio.h>

/**
 * _strstr - Searches a string for any of a set of bytes.
 * @haystack: The string to be searched.
 * @needle: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 * If no set is matched - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; heystack[i] != '\0'; i++)
{

	for (j = 0; needle[j] != '\0'; j++)
	{
		if (haystack[i + j] != needle[j])
			break;
	}
	if (!needle[j])
		return (&heystack[i]);
}
return (NULL);
}
