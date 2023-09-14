#include <stdarg.h>
#include <stdio.h>
#include "variadic_funtions.h"

/**
 * print_all - Entry Point
 * c = char, i = int, f =float, s = char * (if null print (nil))
 * @format: list of arg types
 *
 * Return: 0 Always
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(valist, format);

	while (format && format)
		i++;

	while (format && format[i])
	{
		if (n == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(valist);
}
