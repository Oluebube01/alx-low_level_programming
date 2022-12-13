#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the charcter c to stdout
 * @c: thr character to print
 *
 * Return:On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
