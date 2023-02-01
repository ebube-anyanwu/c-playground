#include <stdio.h>
int main()
{
	int x=4321, y=5678, z;

	printf("Given x = %u, i.e., 0X%04X\n", x, x);
	printf("      y = %u, i.e., 0X%04X\n", y, y);
	z = x & y;
	printf("x & y returns: %6u, i.e., 0X%04X\n", z, z);
	return 0;
}
