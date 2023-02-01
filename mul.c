#include <stdio.h>

int main()
{
	int i, j=9;

	for (i = 0; i <= 12; i++)
		printf("%d x %d = %d\n", j, i, i*j);
	return 0;
}
