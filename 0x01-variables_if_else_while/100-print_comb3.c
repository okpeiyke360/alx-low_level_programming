#include <stdio.h>
/**
 * main - Open
 *
 * Return: 0
 */

int main(void)
{
	int s = 0;
	int p = 0;

	for (p = '0'; p <= '0'; p++)
	{
		for (s = '0'; s <= '0'; s++)
		{
			if (!((s == p) || (p > s)))
			{
				putchar(p);
				putchar(s);
				if (!(s == '0' && p == '0'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);

}
