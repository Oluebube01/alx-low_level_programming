#include "main.h"

/**
 * print_line - draws a straight line kn the terminal
 * @n: number of lines to print '_'
 **/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
