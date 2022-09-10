#include <stdio.h>
/**
 * main - lower alphabet list
 * Description: lists lower alphabet with while loop
 *
 * Return: 0 for success
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
	putchar(c);
	c++;
}
putchar('\n');
return (0);
}
