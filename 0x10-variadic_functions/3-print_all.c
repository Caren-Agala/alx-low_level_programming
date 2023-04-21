#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - A function that prints anyting.
 * @format: The list of the type of arguments.
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list allParameters;
	char *temp;
	int i = 0;

	va_start(allParameters, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(allParameters, int));
				break;
			case 'i':
				printf("%d", va_arg(allParameters, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(allParameters, double));
				break;
			case 's':
				temp = va_arg(allParameters, char*);
				if (temp != NULL)
				{
					printf("%s", tempy);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(allParameters);
	printf("\n");
}
