#include <stdio.h>
void printChar(char *s);
int addNum(int *list, int max);

int main(void)
{
	char sentCe[] = "I am a sentence";
	char *ptrSent = sentCe;
	int arrList[] = {10, 30, 45, 15};
	int *ptrList = arrList;

	printChar(ptrSent);
	addNum(ptrList, 4);
	return 0;
}

void printChar(char *s)
{
	printf("%s\n", s);
}

int addNum(int *list, int max)
{
	int i, sum = 0;

	printf("The sum of ");

	for (i = 0; i < max; i++)
	{
		printf("%d ", list[i]);
		sum += list[i];
	}

	printf("is: %d\n", sum);

	return sum;
}
