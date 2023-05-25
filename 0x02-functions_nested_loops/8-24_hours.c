#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: 0
 */
void jack_bauer(void)
{
	int i;
        int a = 0;
        int b = 0;
        int c = 0;
        int d = -1;

        for (i = 0; i < 1440; ++i)
        {
                ++d;
                if (d == 10)
		{
                        d = 0;
                        ++c;
		}
                else if (c == 6)
		{
                	c = 0;
                        ++b;
		}
		else if (b == 10)
		{
                        b = 0;
                        ++a;
		}
                _putchar(a + '0');
		_putchar(a + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
                _putchar('\n');
        }
}
