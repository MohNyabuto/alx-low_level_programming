#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 *
 * Description: prints _putchar, followed by a new line
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[] = "main";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
