#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
if (i < '9')
{
putchar(i);
putchar(',');
putchar(' ');
}
else
{
putchar(i);
}
}
return (0);
}
