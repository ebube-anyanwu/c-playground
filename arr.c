#include <stdio.h>
int main(){
	int i;
	int arrInt[10];

	for (i=0; i<10; i++)
	{
		arrInt[i] = i + 1;
		printf("arrInt[%d] is initialized with %d at %p\n", i, arrInt[i], &arrInt[i]);
	}
	printf("The size is: %lubytes\n", sizeof(arrInt));

	return (0);
}
