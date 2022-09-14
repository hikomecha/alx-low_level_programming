#include "main.h"
/**
 * _islower - checks lower case
 * @c: int that used
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
