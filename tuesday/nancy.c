#include <stdio.h>

int main()
{
	int angelAge = 45;
	int *ptr_angelAge = &angelAge;

	// & - means address-of operator
	// %p - format specifier to print an address

	printf("The address of angelAge is %d\n", ptr_angelAge);
	return (0);
}
