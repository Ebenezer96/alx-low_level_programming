#include <stdio.h>

/**
* main - entry point
*
* Return: always returns 0
*/

int main(void)
{
char low, e, q;
e = 'e';
q = 'q';
for (low = 'a'; low <= 'z'; low++)
{
if (low != e && low != q)
putchar(low);
}
printf("\n");
return (0);
}
