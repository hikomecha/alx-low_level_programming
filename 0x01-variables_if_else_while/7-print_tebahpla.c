#include <stdio.h>
/**
 * main - lower case in reverse
 *
 *
 * Return: 0 for success
 */
int main(void)
{
char c = 'a';

while (c >= 'z')
{
	putchar(c);
	c--;
}
return (0);
}
