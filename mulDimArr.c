#include <stdio.h>
int main(){
	int i, j;
	int tabl[3][5] = {1, 2, 3, 4, 5,
		10, 20, 30, 40, 50,
		100, 200, 300, 400, 500};

	for (i=0; i<3; i++)
	{
		printf("\n");
		for (j=0; j<5; j++)
			printf("%6d", tabl[i][j]);
	}

	printf("\n");

	return 0;
}
