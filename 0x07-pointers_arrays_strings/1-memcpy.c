#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: storage for the memory
 * @src: memory that is copied
 * @n: number of bytes
 *
 * Return: memory that was copied with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
