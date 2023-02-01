#include <stdio.h>
void unused()
{
	int a =0;
	int b __attribute__ ((unused));
	int c;
	a++;
}


int main(int argc, char *argv[])
{
	unused();
	printf("Function call\n");

	return 0;
}
