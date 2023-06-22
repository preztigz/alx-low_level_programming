#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char var, e, q;

	e = 'e';
	q = 'q';

	for (var = 'a'; var <= 'z'; var ++)
	{
		if (var!= e && var!= q)
			putchar (var);
	}
	putchar ('\n');

	return (0);
}
