#include <stdio.h>
/**
 * main - alphabet prints
 * Description: prints alphabet in both lower and upper
 *
 * Return: 0 when success
 */
int main(void)
{
char c = 'a';
char d = 'A';

while (c <= 'z')
{
	putchar(c);
	c++;
}
while (d <= 'Z')
{
	putchar(d);
	d++
}
putchar('\n');
return (0);
}
