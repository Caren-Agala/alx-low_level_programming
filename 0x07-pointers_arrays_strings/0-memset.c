#include "MAIN.H"
/**
 * _memset - fill memory block with a specified value
 * @s: starting address of the memory that is to be filled by memset
 * @b: desired value that is returned
 * @n: number of bytes that will be changed
 *
 * Return: the changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
