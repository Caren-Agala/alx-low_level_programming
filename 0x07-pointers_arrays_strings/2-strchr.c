#include "main.h"
/**
 * _strchr - set memory function
 * @s: pointer to array
 * @c: char type
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
