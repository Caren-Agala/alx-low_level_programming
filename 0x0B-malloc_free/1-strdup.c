#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *stri)
{
	char *ccc;
	int n, r = 0;

	if (stri == NULL)
		return (NULL);
	n = 0;
	while (stri[n] != '\0')
		n++;

	ccc = malloc(sizeof(char) * (n + 1));

	if (ccc == NULL)
		return (NULL);

	for (r = 0; stri[r]; r++)
		ccc[r] = stri[r];

	return (ccc);
}

