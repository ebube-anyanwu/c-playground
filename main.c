#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i, j, len=0;

	while (s[len])
		len++;

	char z[len];
	char ch;

	for (i = len-1, j = 0; i >= 0, j <= len-1; i--, j++)
	{
		ch = s[i];
		z[j] = ch;
	}

	z[j] = '\0';

	for (i = 0; i < j; i++)
		s[i] = z[i];
	s[i] = '\0';
}
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
