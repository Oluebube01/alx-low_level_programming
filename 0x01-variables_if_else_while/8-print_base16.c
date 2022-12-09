#include <stdio.h>
/**
 * main-program entry point
 * Return:Always 0 no error, non zero if error.
 **/
int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
