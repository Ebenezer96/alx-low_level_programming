#include <stdio.h>

/**
* main - entry point
*
* Return: always returns 0
*/

int main(void)
{
int i, j;
for (i = 0; j <= 90; j++)
{
for (i = j; i <= 90; i++)
if (i != j)
{
putchar(j / 10 + 48);
putchar(j % 10 + 48);
putchar(' ');
putchar(i / 10 + 48);
putchar(i / 10 + 48);
if (j * 100 + i != 9899)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
