#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *stri;
	unsigned int n;

	stri = malloc(sizeof(char) * size);
	if (size == 0 || stri == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		stri[n] = c;
	return (stri);
}
