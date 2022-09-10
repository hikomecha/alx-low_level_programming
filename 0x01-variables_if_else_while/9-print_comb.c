#include <stdio.h>
/**
 * main - combination of numbers
 *
 *
 *
 * Return: 0 for success
 */
int main(void)
{
int i = '10';

while (i <= '18')
{
	putchar(i);
	if (i <= '17')
	{
		putchar(',');
		putchar(' ');
	}
	i++;
}
putchar('\n');
return (0);
}
