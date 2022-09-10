#include <stdio.h>
/**
 * main - list lower case alphabet
 * Description: list all lower case without q and e
 *
 * Return: 0 for success
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
	if (c != 'e' && c != 'q')
	{
		putchar(c);
	}
	c++
}
putchar('\n')
return (0);
}
