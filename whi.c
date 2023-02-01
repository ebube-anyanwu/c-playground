#include <stdio.h>

int main(){
	int i;

	printf("Enter a character:\n(enter x to exit)\n");
	do{
		i = getc(stdin);
		putchar(i);
	} while (i != 'x');

	printf("\nOut of loop. Bye!\n");
	return 0;
}
