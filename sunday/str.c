#include <stdio.h>

int main(void)
{
	char quote[] = "A stich in time saves nine";
	int i = 0;
	int length = 0;

	while (quote[i] != '\0')
	{
		length++;
		i++;
	}
	printf("The string length of quote is %d\n", length);

	return 0;
}
