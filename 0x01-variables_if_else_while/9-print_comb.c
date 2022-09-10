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
int i = '0';

while (i <= '9')
{
	putchar(i);
	if (i <= '8')
	{
		putchar(',');
		putchar(' ');
	}
	i++;
}
putchar('\n');
return (0);
}
