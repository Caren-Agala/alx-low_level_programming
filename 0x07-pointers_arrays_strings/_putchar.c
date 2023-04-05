#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char "c" to stdout
 * @c is the chararcter to print
 *
 * Return: 1 on succuess
 * : -1 on error and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
