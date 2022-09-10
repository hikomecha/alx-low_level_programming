#include <stdio.h>
/**
 * main - three digit combination
 *
 *
 *
 *Return: 0 when finished
*/
int main(void)
{
int i, j, n;
for (i = '0'; i <= '9'; i++)
{
	for (j = '0'; j <= '9'; j++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			if ((i < j) & (j < n) & (n <= '9'))
			{
				putchar(i);
				putchar(j);
				putchar(n);
				if ((i + j + n) < 168)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
