#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints number from 0 to 9 but
 * execluding 2 and 4 followed by a new line 
 * Return: void
 */

void print_most_numbers(void)
{
char c;

for (c = '0'; c < '9'; c++)
{
if ( c != '2' && c != '4')
_putchar(c);
}
_putchar('\n');
}
