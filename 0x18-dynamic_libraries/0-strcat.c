#include "main.h"

/**
 *_strcat - Entry to program to concatenate
 *@dest: pointer to string
 *@src: pointer to string
 * Return: dest pointer
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0 ; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
