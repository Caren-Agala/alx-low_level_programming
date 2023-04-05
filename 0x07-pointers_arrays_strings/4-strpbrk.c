#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - print the consecutive character of s1 that are inn s2
 * @s: source string
 * @accept: seaching string
 *
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; *(accept + b); b++)
		{
			if (*(s + a) == *(accept + b))
			{
				break;
			}
		}
		if (*(accept + b) != '\0')
		{
			return (s + a);
		}
	}
	return (0);
}
