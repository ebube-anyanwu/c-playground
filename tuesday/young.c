#include <stdio.h>
void youngAngel(int *num)
{
	*num /= 5;
}

int main()
{
	int angelAge = 45;
	int *ptr_angelAge;

	ptr_angelAge = &angelAge;

	printf("The value of angelAge before function call is %d\n", angelAge);

	// function call
	youngAngel(ptr_angelAge);
	
	printf("The value of angelAge after function call is %d\n", angelAge);
	
	return 0;
}
